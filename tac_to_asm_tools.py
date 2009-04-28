"""
Python tool for converting 3ac to mips asm

"""
import re

"""
this class handles the allocation of
registers
"""
class Registers:
    
    def __init__(self):
        #this are the registers available for funciton arguments
        self.arg_regs = {"a0":True,"a1":True,"a2":True,"a3":True}
        self.temp_regs = {"t0":True,"t1":True,"t2":True,"t3":True,"t4":True,"t5":True,"t6":True,"t7":True,"t8":True,"t9":True}
        self.saved_temp_regs = {"s0":True,"s1":True,"s2":True,"s3":True,"s4":True,"s5":True,"s6":True,"s7":True}
        

    def next_temp(self):
        for k in self.temp_regs:
            if(self.temp_regs[k]):
                self.temp_regs[k] = False
                return "$"+k
        return "no_reg"

    def next_saved_temp(self):
        for k in self.saved_temp_regs:
            if(self.saved_temp_regs[k]):
                self.saved_temp_regs[k] = False
                return "$"+k
        return "no_reg"

    #disregards mips seperation of saved and not saved temps
    def next_reg(self):
        #try for an unsaved one first
        reg = self.next_temp()
        #if that doesn't work try for a saved reg
        if(reg == "no_reg"):
            reg = self.next_saved_temp()
        #no matter what we can return this value
        return reg
        
        

    def next_arg(self):
        for k in self.arg_regs:
            if(self.arg_regs[k]):
                self.arg_regs[k] = False
            return "$"+k
        return "no_reg"

    def free_reg(self,reg_string):
        reg_string = reg_string.strip("$") # don't have to worry about whether or not we have the $
        if (reg_string in self.arg_regs):
            self.arg_regs[reg_string] = True
        elif (reg_string in self.temp_regs):
            self.temp_regs[reg_string] = True
        elif (reg_string in self.saved_temp_regs):
            self.saved_temp_regs[reg_string] = True



"""
A class which read the file, performs manipulations on it
and in the end, hopefully spits out ASM :)
"""

class TAC_file:

    def __init__(self,filename):
        in_file = open(filename,'r')
        self.tac_lines = in_file.readlines()
        self.asm_lines = []
        self.regs = Registers()
        #no need to keep an open file stream through all this
        in_file.close()
    
    #goes through the lines and replaces temps with registers
    def assign_temps_to_regs(self):
        pass

    #returns a string of asm
    #does most of the heavy lifting
    def line_to_asm(self, tac_line):
        """
        if though I generally don't like them
        a long if elif statement might work here since 
        there is a relativley small set of operations
        that need to be done
        """
        #need this because of issues with immediate values
        intp = '[0-9]+'

        line = tac_line.replace(" ","")
        line = line.replace(":=","=") #i didn't really need :=

#addition and subtraction

        if( '+' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("+")
            oper = "add"
            if(re.match(intp,op1) or re.match(intp,op2)):
                oper ="addi"
            return oper+" "+dest+", "+op1+", "+op2
        #pretty much the same for sub
        elif( '-' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("-")
            oper = "sub"
            if(re.match(intp,op1) or re.match(intp,op2)):
                oper ="subi"
            return oper+" "+dest+", "+op1+", "+op2

#multiplication division modulo        
        elif( '*' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("*")
            oper = "mult"
            rstring = oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mflo "+dest
            return rstring

        elif( '/' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("/")
            oper = "div"
            rstring = oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mflo "+dest
            return rstring
            
        #modulo is the same as div accept 
        #value is in mfhi
        elif( '%' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("%")
            oper = "div"
            rstring = oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mfhi "+dest
            return rstring

#if statements
        elif("ifFalse" in line):
            #do this later
            pass
        elif("if" in line):
            stmnt = line.replace("if","")
            compare, loop_dest = stmnt.split("goto")
            if("==" in compare):
                oper = "beq"
                op1,op2 = compare.split("==")
            elif("!=" in compare):
                oper = "bne"
                op1,op2 = compare.split("!=")
            elif("<=" in compare):
                oper = "ble"
                op1,op2 = compare.split("<=")
            elif(">=" in compare):
                oper = "bge"
                op1,op2 = compare.split(">=")
            elif(">" in compare):
                oper = "bgt"
                op1,op2 = compare.split(">")
            elif("<" in compare):
                oper = "blt"
                op1,op2 = compare.split("<")
            rstring = oper+" "+op1+", "+op2+", "+loop_dest
            return rstring

#goto (must be handled after all other cases with gotos inthem)
        elif("goto" in line):
            return "b "+line.split("goto")[1]

            

        #if we fail to do anything return the tac_line
        return tac_line
    
    def to_asm(self):
        #make sure asm_lines is empty
        self.asm_lines = []
        for each in self.tac_lines:
            self.asm_lines.append(self.line_to_asm(each))
        

    def find_next_temp_value(self):
        pattern = 'T[0-9]+'
        for line in self.tac_lines:
            if(re.search(pattern,line)):
                return re.search(pattern,line).group()
        return None

    #returns the value of the temp replaced
    def replace_next_value(self):
        temp_to_replace = self.find_next_temp_value()
        print temp_to_replace
        temporary_tac_lines = []
        if(temp_to_replace):
            next_reg = self.regs.next_reg() 
            for each in self.tac_lines:
                 temporary_tac_lines.append(each.replace(temp_to_replace,next_reg))
            self.tac_lines = temporary_tac_lines
            return temp_to_replace
        else:
            return None

    def replace_all_temps(self):
        while(self.replace_next_value()):
            pass #should work
        
      
              
               
              
                   
                   
