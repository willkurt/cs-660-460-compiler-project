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
        pass
    
    def to_asm(self,destination):
        #make sure asm_lines is empty
        self.asm_lines = []
        for each in tac_lines:
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
        
      
              
               
              
                   
                   
