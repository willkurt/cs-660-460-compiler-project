#class to represent a grammar rule
import re

class GrammarRule:
    """
    Takes a rule and a list of productions
    (represented as strings) for that rule
    is able to output all of the code necessary for AST 
    generation

    
    notes:
    char literal types are always 'char'
    
    tokens should default to int
    
    """
    def __init__(self, rule, production_list):
        self.rule = rule
        self.productions = production_list
        #i think I want to do a lot more here
        self.struct_vars = []
        self._build_struct_vars()


    def _build_struct_vars(self):
        """
        only 3 types of vars exits
        pointers to nodes named like:
        this_type_node_1

        terminal token named like:
        token_1

        and literal characters named like:
        char_lit_1
        """
        all_struct_vars = []
        char_lit = '\'.\''
        token = '[A-Z]+'
        for each in self.productions:
            char_lits = re.findall(char_lit,each)
            tokens = re.findall(token,each)
            remaining = each.split(' ')
            for c in char_lits:
                remaining.remove(c)
            for t in tokens:
                remaining.remove(t)
            #find how many char_x
            # then and char_1 ... char_n
            number_of_char_lits = len(char_lits)
            for i in range(1,number_of_char_lits+1):
                all_struct_vars.append("char_lit_"+str(i))
            #find how many token_x
            #then add 
            number_of_tokens = len(tokens)
            for i in range(1,number_of_tokens+1):
                all_struct_vars.append("token_"+str(i))
            while(len(remaining) > 0):
                current = remaining[0]
                current_count = remaining.count(current)
                for i in range(1,current_count+1):
                    all_struct_vars.append(current+"_node_"+str(i))
                remaining.remove(current)
        self.struct_vars = set(all_struct_vars)

    def rule_to_string(self):
        std_spacing = "    "
        rule_string = ""
        rule_string += self.rule+"\n"
        if (len(self.productions) > 0):
            first = self.productions[0]
            rest = self.productions[1:]
            rule_string += std_spacing+':'+first+"\n"
            for each in rest:
                rule_string+= std_spacing+'|'+each+"\n"
        rule_string += std_spacing+";\n"
        return rule_string

    #creates the string rep of a c struct
    #maybe an actual class later on?
    def c_struct(self):
        
        struct_string = "struct "+self.rule+"_node {\n"
        for each in self.struct_vars:
            if "char_lit_" in each:
                struct_string += "char "+each+";\n"
            #int is the default value for tokens
            #change with actual grammar as is necessary
            elif "token_" in each:
                struct_string += "int "+each+";\n"
            #only remaining case is a node ptr
            else:
                struct_string += each[:-2]+" *"+each+";\n"
        struct_string += "}\n"
        
        return struct_string
        
            

    #create the yylval for the struct
    def yylval(self):
        pass

    #create the grammar string with necessary code
    def to_string_with_code(self):
        pass
