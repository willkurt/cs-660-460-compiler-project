#stupid program to add all the debugging info we need
#saving us a lot of typing
def main():
    original = open("original_c_grammar.y",'r') #original yacc with no debugging
    new_parse = open("new_c_grammar.y",'w') #new yacc file!
    file_lines = original.readlines()
    first = [] #these are the parts of the file before and including %%
    middle = [] #this is the only processed part
    end = [] #these the lines after and including %%

    consume = False
    target = first
    for line in file_lines:
        target.append(line)
        if("%%" in line):
        #if we're already in consume mode we need to switch to the end
            if(consume):
                target = end
        #otherwise we're exciting the first
            else:
                target = middle
                consume = True
        

    new_middle =  process(middle)
    for each in first:
        new_parse.write(each)

    for each in new_middle: 
        new_parse.write(each)

    for each in end:
        new_parse.write(each)

    original.close()
    new_parse.close()

""" so we have sets of lines that look like this
    something
              :onething
              |option second thing
              ; end
              
    and we need it to look something like this
    
    something
             :onething {if(parseDebug)\n{parseDebugOut<<\"statement.replate(",\\")\"}}"""

def process(middle_list):
    new_middle_list = []
    production = ""
    
    #for ease this is going to look a little backwards
    for line in middle_list:
        if("; " in line):
            #nothing special
            new_middle_list.append(line)
        elif("|" in line):
            #or statment, same as after :
            tmp = line.split("|",1)
            stmt = tmp[1].strip().replace("\"","\\\"") #get ride of white space and qutoes
            newline = "%s | %s {if(parseDebug){parseDebugOut << \"%s <- %s\\n\";}}" % (tmp[0],tmp[1],production,stmt)
            new_middle_list.append(newline)
        elif(":" in line):
            #or statment, same as after |
            tmp = line.split(":",1)
            stmt = tmp[1].strip().replace("\"","\\\"") #get ride of white space and qutoes
            newline = "%s : %s {if(parseDebug)\n{parseDebugOut << \"%s <- %s\\n\";}}\n" % (tmp[0],tmp[1],production,stmt)
            new_middle_list.append(newline)
        else:
            production = line.strip("\n")
            new_middle_list.append(line)
    return new_middle_list
        

main()
