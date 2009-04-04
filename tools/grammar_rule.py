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
        self.struct_name = rule+"_node"
        self.productions = production_list
        #i think I want to do a lot more here
        self.struct_vars = []
        self._build_struct_vars()
        self.rule_code_dict = {}
        self._build_rule_code_dict()
        

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
        token = '[A-Z]+_?[A-Z]+'
        for each in self.productions:
            char_lits = re.findall(char_lit,each)
            tokens = re.findall(token,each)
            remaining = each.split(' ')
            for c in char_lits:
                #not sure I relaly really need this..
                if c in remaining:
                    remaining.remove(c)
            for t in tokens:
                if t in remaining:
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

    def rule_to_string(self,with_code=False):
        std_spacing = "    "
        rule_string = ""
        rule_string += self.rule+"\n"
        if (len(self.productions) > 0):
            first = self.productions[0]
            rest = self.productions[1:]
            rule_string += std_spacing+':'+first+"\n"
            if(with_code):
                rule_string += self.rule_code_dict[first]
            for each in rest:
                rule_string+= std_spacing+'|'+each+"\n"
                if(with_code):
                    rule_string += self.rule_code_dict[each]
        rule_string += std_spacing+";\n"
        return rule_string

    #creates the string rep of a c struct
    #maybe an actual class later on?
    def c_struct(self):
        
        struct_string = "struct "+self.rule+"_node {\n"
        for each in self.struct_vars:
            if "char_lit_" in each:
                struct_string += "char *"+each+";\n"
            #int is the default value for tokens
            #change with actual grammar as is necessary
            elif "token_" in each:
                struct_string += "int "+each+";\n"
            #only remaining case is a node ptr
            else:
                struct_string += "struct "+each[:-2]+" *"+each+";\n"
        struct_string += "};\n"
        
        return struct_string
        
    #create print declaration
    def print_decl(self):
        return "void print_"+self.struct_name+"("+self.struct_name+" *ptr);\n"
   
   

#i'm going to try to run this with count intead
 #create the print statement
    def print_stmnt(self):
        spacing = "    "
        #to start I only want to see the nodes
        stmnt_str = "void print_"+self.struct_name+"("+self.struct_name+" *ptr)\n{\n    "
        stmnt_str += self.struct_name + " aNode = *ptr;\n"
        stmnt_str += "std::cout << \"("+self.struct_name+"\\n"+spacing+"\";\n"
        for each in self.struct_vars:
            #later we can change this
            if("_node_" in each):
                stmnt_str+="   if(aNode."+each+" != 0)\n    { print_"+each[:-2]+" (aNode."+each+");}\n"
        stmnt_str+="std::cout<<\")\";\n"
        stmnt_str+="}\n"
        return stmnt_str
    
    
            

    #create the yylval for the union
    def yylval(self):
        return "struct "+self.rule+"_node *"+self.rule+"_val;\n"

    def type_val(self):
        return "%type <"+self.rule+"_val> "+self.rule+"\n"

    #create the grammar string with necessary code
    def _build_rule_code_dict(self):
        """
        general outline:
        node_type anode;
        <assigment>
        $$ = &anode;
        """
        char_lit = '\'.\''
        token = '[A-Z]+_?[A-Z]+'
        spacing = "    "
        for each in self.productions:
            vars_used = []
            code_stmnt = "{\n "+spacing+self.struct_name+" *anode;\n"
            code_stmnt += "anode = ("+self.struct_name+"*) malloc(sizeof("+self.struct_name+"));\n"
            
            char_lits = re.findall(char_lit,each)
            tokens = re.findall(token,each)
            remaining = each.split(' ')
            statment_list = each.split(' ')
            for c in char_lits:
                if c in remaining:
                    remaining.remove(c)
                else:
                    print "trouble with: "+c
            for t in tokens:
                if t in remaining:
                    remaining.remove(t)
                else:
                    print "trouble with: "+t
            #find how many char_x
            # then and char_1 ... char_n
            number_of_char_lits = len(char_lits)
            for i in range(1,number_of_char_lits+1):
                vars_used.append("char_lit_"+str(i))
                location = statment_list.index(char_lits[i-1])+1
                code_stmnt +=spacing+"(*anode).char_lit_"+str(i)+'=\"'+statment_list[location-1]+"\";\n"
            #find how many token_x
            #then add 
            number_of_tokens = len(tokens)
            for i in range(1,number_of_tokens+1):
                vars_used.append("token_"+str(i))
                location = statment_list.index(tokens[i-1])+1
                code_stmnt +=spacing+"(*anode).token_"+str(i)+"=$"+str(location)+";\n"
            while(len(remaining) > 0):
                current = remaining[0]
                current_count = remaining.count(current)
                for i in range(1,current_count+1):
                    vars_used.append(current+"_node_"+str(i))
                    location = statment_list.index(current,current_count-1)+1
                    code_stmnt +=spacing+"(*anode)."+current+"_node_"+str(i)+"=$"+str(location)+";\n"
                remaining.remove(current)
            for var in (self.struct_vars - set(vars_used)):
                if "char_lit_" in var:
                    code_stmnt += spacing+"(*anode)."+var+"= \"\";\n"
                else:
                    code_stmnt += spacing+"(*anode)."+var+"= 0;\n"
            code_stmnt += spacing+"$$ = anode;\n}\n"        
            self.rule_code_dict[each] = code_stmnt
