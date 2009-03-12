#stupid program to add all the debugging info we need
#saving us a lot of typing
original = open("original_c_grammar.lex",'r') #original lex with no debugging
new_lex = open("new_c_grammar.lex",'w') #new lex file!
for line in original:
    #if the line is returning something we need to potentionally output
    if '{return' in line:
        #needs the space or else will cause errors with the literal '('
        token = line.split(' (')[1].split(')')[0]
        #our debug string
        debug_string = "if(lexDebug){lexDebugOut << \"%s \";}" % (token)
        #let's split the line and insert our new debug string
        #the '{r' is just because we use the literal '{' in our code
        first, second = line.split("{r",1);
        line = first+"{"+debug_string+'r'+second
    new_lex.write(line)


original.close()
new_lex.close()
