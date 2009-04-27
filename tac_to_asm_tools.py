"""
Python tool for converting 3ac to mips asm

"""


#this class handles the allocation of
#registers
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
