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
        keys = self.temp_regs.keys()
        keys.sort()
        for k in keys:
            if(self.temp_regs[k]):
                self.temp_regs[k] = False
                return "$"+k
        return "no_reg"

    def next_saved_temp(self):
        keys = self.saved_temp_regs.keys()
        keys.sort()
        for k in keys:
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
        keys = self.arg_regs.keys()
        keys.sort()
        for k in keys:
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
        self.addresses = [] #stores registers that are actually addresses
        self.regs = Registers()
        #no need to keep an open file stream through all this
        in_file.close()
    
    
        

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

        if("offset" in line):
            rstring = "#"+tac_line
            dest,rest = line.split("=")
            base,offset = rest.split("offset")
            rstring += "la "+dest+", "+base+"\n"
            rstring += "add "+dest+", "+dest+", "+offset
            self.addresses.append(dest)
            return rstring
        elif("declare" in line):
            rstring =  "#"+tac_line+"\n"
            return rstring
        elif("param" in line):
            rstring = "#"+tac_line+"\n"
            reg = line.split("=")[1]
            nextReg = self.regs.next_arg()
            #move works in some cases
            #I'm not sure all
            rstring += "move "+nextReg+", "+reg
            return rstring
        elif("funcall" in line):
            #free up all the args regs
            for each in self.regs.arg_regs.keys():
                self.regs.free_reg(each)
            rstring = "#"+tac_line+"\n"
            #special function to print ints
            if("printi" in line):
                #$a0 should be set
                rstring += "li $v0, 1\n"
                rstring += "syscall\n"
            else:
                pass
            return rstring
                
                
#addition and subtraction
        
        elif( '+' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("+")
            oper = "add"
            rstring = "#"+line+"\n"
            newReg = ""
           
            if(re.match(intp,op1)):
                newReg = self.regs.next_saved_temp()
                rstring += "li "+newReg+", "+op1+"\n"
                op1 = newReg
                self.regs.free_reg(newReg)
           
            if(re.match(intp,op2)):
                oper ="addi"
            rstring += oper+" "+dest+", "+op1+", "+op2
            return rstring
        #pretty much the same for sub need to make the same fixes
        elif( '-' in line):
            rstring = "#"+tac_line
            dest,rest = line.split("=")
            op1,op2 = rest.split("-")
            oper = "sub"
            if(re.match(intp,op1) or re.match(intp,op2)):
                oper ="subi"
            rstring += oper+" "+dest+", "+op1+", "+op2
            return rstring

#multiplication division modulo        
        elif( '*' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("*")
            op2 = op2.strip()
            oper = "mult"
            rstring = "#"+tac_line
            newReg1 = ""
            newReg2 = ""
            if(re.match(intp,op1)):
                newReg1 = self.regs.next_saved_temp()
                rstring += "li "+newReg1+", "+op1+"\n"
                op1 = newReg1
            elif(op1 in self.addresses):
                self.addresses.remove(op1)
                newReg1 = self.regs.next_saved_temp()
                rstring += "lw "+newReg1+" ("+op1+")\n"
                op1 = newReg1
            if(re.match(intp,op2)):
                newReg2 = self.regs.next_saved_temp()
                rstring += "li "+newReg2+", "+op2+"\n"
                op2 = newReg2
            elif(op2 in self.addresses):
                self.addresses.remove(op2)
                newReg2 = self.regs.next_saved_temp()
                rstring += "lw "+newReg2+" ("+op2+")\n"
                op2 = newReg2
            rstring += oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mflo "+dest
            if(newReg1 != ""):
                self.regs.free_reg(newReg1)
            if(newReg2 != ""):
                self.regs.free_reg(newReg2)
            return rstring
#need to add previous correction to / and %
        elif( '/' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("/")
            oper = "div"
            rstring = "#"+tac_line
            rstring += oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mflo "+dest
            return rstring
            
        #modulo is the same as div accept 
        #value is in mfhi
        elif( '%' in line):
            dest,rest = line.split("=")
            op1,op2 = rest.split("%")
            oper = "div"
            rstring = "#"+tac_line
            rstring += oper+" "+op1+", "+op2+"\n"
            #yep only worried about 32 bit multlo
            rstring += "mfhi "+dest
            return rstring

#if statements
        elif("ifFalse" in line):
            stmnt = line.replace("ifFalse","")
            op1, loop_dest = stmnt.split("goto")
            rstring = "#"+tac_line
            rstring = "beqz "+op1+", "+loop_dest
            return rstring
           
        elif("if" in line):
            stmnt = line.replace("if","")
            compare, loop_dest = stmnt.split("goto")
            rstring = "#"+tac_line
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
            rstring += oper+" "+op1+", "+op2+", "+loop_dest
            return rstring

#goto (must be handled after all other cases with gotos inthem)
        elif("goto" in line):
            rstring = "#"+tac_line
            rstring += "b "+line.split("goto")[1]
            return rstring

#assignment
#by this point all other things with an '=' should be done
        elif("=" in line):
            rstring = "#"+tac_line
            dest,value = line.split("=")
            if("\n" in value):
                value = value.replace("\n","")
            #assingment is actually reasonably complicated
            if(dest[0] != "$"): #not dealing with reg, hence var
                #case 0: var == add
                # lw newReg, add
                # sw newReg, var
                if(value in self.addresses):
                    #remove it from the address as it has been used
                    self.addresses.remove(value)
                    newReg = self.regs.next_saved_temp()
                    rstring += "lw "+newReg+", ("+value+")\n"
                    rstring += "sw "+newReg+", "+dest
                    self.regs.free_reg(newReg)
                #case 1: var = reg
                #  sw reg, var
                elif(value[0] == "$"): #reg
                    #I'm not sure were this '\n' is coming from
                    value = value.strip('\n')
                    rstring += "sw "+value+", "+dest
                #case 2: var = imm
                # li newReg, imm
                # sw newReg, var
                elif(re.match(intp,value)):
                    newReg = self.regs.next_saved_temp()
                    rstring += "li "+newReg+", "+value+"\n"
                    rstring += "sw "+newReg+", "+dest
                    self.regs.free_reg(newReg)

                else: #must be a var
                    
                #I'm not even 100% this happens in my 3ac
                #case 3: var = var
                    newReg = self.regs.next_saved_temp()
                    rstring += "lw "+newReg+", "+value+"\n"
                    rstring += "sw "+newReg+", "+dest
                    self.regs.free_reg(newReg) 
            elif(dest in self.addresses):
                #if an addressed reg is used
                #it should be removed
                self.addresses.remove(dest)
                #case were it's really an address
                #case a: add = add
              
                if(value in self.addresses):
                    self.addresses.remove(value)
                    rstring += "sw ("+value+"), ("+dest+")"
                #case b: add = reg
                elif(value[0] == "$"):
                    rstring += "sw "+value+", ("+dest+")"
                    
                elif(re.match(intp,value)):
                    newReg = self.regs.next_saved_temp()
                    rstring += "li "+newReg+", "+value+"\n"
                    rstring += "sw "+newReg+", ("+dest+")"
                    self.regs.free_reg(newReg)
                else: #must be a var
                    newReg = self.regs.next_saved_temp()
                    rstring += "lw "+newReg+", "+value+"\n"
                    rstring += "sw "+newReg+", "+"("+dest+")"
                    self.regs.free_reg(newReg)
            else: #this is the case of reg assignment
                #case : reg = add
                # lw reg, (add)
                if(value in self.addresses):
                    self.addresses.remove(value)
                    rstring += "lw "+dest+", ("+value+")"
                #case x: reg = reg
                #la reg, reg
                elif(value[0] == "$"): #reg
                     rstring += "la "+dest+", "+value  
                #case y: reg = imm
                #li reg, imm
                elif(re.match(intp,value)):
                    rstring += "li "+dest+", "+value
                    
               
                #case z: reg = var
                #lw reg, var
                else: #must be a var
                    rstring += "lw "+dest+", "+value
            
                
            return rstring
        #if we fail to do anything return the tac_line
        return "#"+tac_line #comment out the lines not used
    
    def to_asm(self):
        #make sure asm_lines is empty
        self.asm_lines = []
        for each in self.tac_lines:
            self.asm_lines.append(self.line_to_asm(each))
            
    def write_asm(self,file_name):
        self.replace_type_info()
       # self.replace_all_temps()
        self.smarter_reg_allocation()
        self.to_asm()
        f = open(file_name,'w')
        f.write("\n".join(self.asm_lines))
        f.close()

#some preprocessor stuff
    def replace_type_info(self):
        for x in range(len(self.tac_lines)):
            if("int_size" in self.tac_lines[x]):
                self.tac_lines[x] = self.tac_lines[x].replace("int_size","4")
            if("int_type" in self.tac_lines[x]):
                self.tac_lines[x] = self.tac_lines[x].replace("int_type","4")


    def find_next_temp_value(self):
        pattern = 'T[0-9]+'
        patternlong = 'T[0-9][0-9]' #for longer ones, python regex stops at shorted
        for line in self.tac_lines:
            if(re.search(patternlong,line)):
                return re.search(patternlong,line).group()
        for line in self.tac_lines:
            if(re.search(pattern,line)):
                return re.search(pattern,line).group()
        return None

    #returns the value of the temp replaced
    def replace_next_value(self):
        temp_to_replace = self.find_next_temp_value()
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
        
      
    
    #a more efficent version of replace_all_temps
    #no temp should be seen more than 2x
    #so after it has been replaced a secondtime
    #it is okay to re alloc the reg after it has been
    #replaced a seond time
    def smarter_reg_allocation(self):
        #for this pass we make an assumption that
        #spaces are still good delimiters.
        temp = []
        used_dict = {}
        pattern = 'T[0-9]+' #shouldn't have length issues like earlier
        for line in self.tac_lines:
            to_free = []
            line_list = line.split(" ")
            for each in line_list:
                if(re.match(pattern, each)):
                    each = each.strip()
                    if(each in used_dict.keys()):
                        line = line.replace(each,used_dict[each])
                        to_free.append(used_dict[each])
                    else:
                        nextReg = self.regs.next_reg()
                        used_dict[each] = nextReg
                        line = line.replace(each,nextReg)
            for item in to_free:
                self.regs.free_reg(item)
            temp.append(line)
        self.tac_lines = temp
               
              
                   
                   
