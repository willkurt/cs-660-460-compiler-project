#should take a series of 
#reductions/productions
#and create all the code necessary for an AST
import re
from grammar_rule import GrammarRule

def main():
    core = open("ast_core.txt",'r')
    out = open("py_ast_out.txt",'w')
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
            current_productions.append(line.strip())
        elif(re.match(expression_pattern,line)):
            print "found start"
            current_exp = line.strip()
            print line.strip()
        else:
            print "found nothing"
    
    yylval_string = ""
    type_val_string = ""
    body = ""
    
    for obj in g_objects:
        yylval_string += obj.yylval()+"\n"
        type_val_string += obj.type_val()+"\n"
        body += obj.rule_to_string(True)

    
    out.write(yylval_string)
    out.write("/************/\n")
    out.write(type_val_string)
    out.write("/************/\n")
    out.write(body)
    core.close()
    out.close()


if __name__ == "__main__":
    main()
                         
