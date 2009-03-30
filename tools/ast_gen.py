#should take a series of 
#reductions/productions
#and create all the code necessary for an AST
import re
from grammar_rule import GrammarRule

def main():
    core = open("ast_core.txt",'r')
    out = open("py_ast_out.txt",'w')
    structs = open("ast_structs.h",'w')
    g_objects = []
    expression_pattern = '([a-z]|_)+'
    grammar_lines = core.readlines()
    current_exp = ""
    current_productions = []
    for line in grammar_lines:
        if(";" in line and "\';\'" not in line):
            print "found end"
            g_objects.append(GrammarRule(current_exp,current_productions))
            current_exp = ""
            current_productions = []
        elif(":" in line or "|" in line):
            print "found production"
            current_productions.append(line.replace(": "," ",1).replace("| "," ",1).strip())
        elif(re.match(expression_pattern,line)):
            print "found start"
            current_exp = line.strip()
            print line.strip()
        else:
            print "found nothing"
    
    yylval_string = ""
    type_val_string = ""
    c_structs = "#ifndef AST_STRUCTS_H\n#define AST_STRUCTS_H\n\n"
    body = ""
    
    for obj in g_objects:
        yylval_string += obj.yylval()
        type_val_string += obj.type_val()
        c_structs += obj.c_struct()+"\n"
        body += obj.rule_to_string(True)

    c_structs += "\n\n#endif"
    structs.write(c_structs)
    out.write(yylval_string)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(type_val_string)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(body)
    core.close()
    structs.close()
    out.close()


if __name__ == "__main__":
    main()
                         
