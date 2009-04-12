#should take a series of 
#reductions/productions
#and create all the code necessary for an AST
import re
from grammar_rule import GrammarRule

def main():
    core = open("ast_core.txt",'r')
    out = open("py_ast_out.txt",'w')
    structs = open("new_ast_structs.h",'w')
    print_decls = open("print_decls.h",'w')
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
    print_decl = "#ifndef PRINT_DECLS_H\n#include <iostream>\n#define PRINT_DECLS_H\n\n"
    tac_decl = ""
    tac_defs = ""
    print_defs = ""
    body = ""
    for obj in g_objects:
        yylval_string += obj.yylval()
        type_val_string += obj.type_val()
        c_structs += obj.c_struct()+"\n"
        print_decl += obj.print_decl()
        print_defs += obj.print_stmnt()
        tac_decl += obj.tac_decl()
        tac_defs += obj.tac_stmnt()
        body += obj.rule_to_string(True)

    c_structs += "\n\n#endif"
    print_decl += "\n/*****/\n\n"
    print_decl+= tac_decl
    print_decl += "\n\n#endif"
    structs.write(c_structs)
    print_decls.write(print_decl)
    out.write(yylval_string)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(type_val_string)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(body)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(print_defs)
    out.write("\n")
    out.write("/************/\n")
    out.write("\n")
    out.write(tac_defs)
    core.close()
    structs.close()
    print_decls.close()
    out.close()


if __name__ == "__main__":
    main()
                         
