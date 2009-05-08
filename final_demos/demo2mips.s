.data
newline: .asciiz "\n" #for newline function
.comm x3 4   #declare x3 | 4

.comm y4 4   #declare y4 | 4

.comm result5 4   #declare result5 | 4

.text
#function main1 | 4

main:

#

#$t0 := 5
li $t0, 5
#x3 := $t0
sw $t0, x3
#

#$t0 := 17
li $t0, 17
#y4 := $t0
sw $t0, y4
#$t0 := y4
lw $t0, y4
#$t1 := x3
lw $t1, x3
#$t2 := $t0 / $t1
div $t0, $t1
mflo $t2
#result5 = $t2
sw $t2, result5
#argsno 1

addiu $sp, $sp, -4
#$t0 := result5
lw $t0, result5
#param = $t0

sw $t0, 0($sp)
# funcall printi1852404336

lw $a0, 0($sp)
li $v0, 1
addiu $sp, $sp, 4
syscall

# funcall printn1852404336

la $a0, newline
li $v0, 4
syscall

#$t0 := y4
lw $t0, y4
#$t1 := x3
lw $t1, x3
#$t2 := $t0 % $t1
div $t0, $t1
mfhi $t2
#result5 = $t2
sw $t2, result5
#argsno 1

addiu $sp, $sp, -4
#$t0 := result5
lw $t0, result5
#param = $t0

sw $t0, 0($sp)
# funcall printi1852404336

lw $a0, 0($sp)
li $v0, 1
addiu $sp, $sp, 4
syscall

# funcall printn1852404336

la $a0, newline
li $v0, 4
syscall

#$t0 := y4
lw $t0, y4
#$t1 := x3
lw $t1, x3
#$t2 := $t0 / $t1
div $t0, $t1
mflo $t2
#$t0 := y4
lw $t0, y4
#$t1 := x3
lw $t1, x3
#$t3 := $t0 % $t1
div $t0, $t1
mfhi $t3
#$t0=$t3+$t2

add $t0, $t3, $t2

#result5 = $t0
sw $t0, result5
#argsno 1

addiu $sp, $sp, -4
#$t0 := result5
lw $t0, result5
#param = $t0

sw $t0, 0($sp)
# funcall printi1852404336

lw $a0, 0($sp)
li $v0, 1
addiu $sp, $sp, 4
syscall

# funcall printn1852404336

la $a0, newline
li $v0, 4
syscall

#end function

li $v0, 10
syscall