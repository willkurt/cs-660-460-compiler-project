.data
newline: .asciiz "\n" #for newline function
.comm x5 4   #declare x5 | 4

.comm y6 4   #declare y6 | 4

.comm result7 4   #declare result7 | 4

.text
#function main3 | 4

main:

#

#$t0 := 5
li $t0, 5
#x5 := $t0
sw $t0, x5
#

#$t0 := 17
li $t0, 17
#y6 := $t0
sw $t0, y6
#

#condition start

#$t0 := y6
lw $t0, y6
#$t1 := x5
lw $t1, x5
#if $t1 < $t0 goto L2
blt $t1, $t0, L2

#goto L3
b L3

#L2:

L2:

#$t0 := 1
li $t0, 1
#goto L4
b L4

#L3:

L3:

#$t0 := 0
li $t0, 0
#goto L4
b L4

#L4:

L4:

#

#condition end

beqz $t0, L0

#$t0 := y6
lw $t0, y6
#result7 = $t0
sw $t0, result7
#argsno 1

addiu $sp, $sp, -4
#$t0 := result7
lw $t0, result7
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

#goto L1
b L1

#L0: 

L0:

#goto L1
b L1

#L1: 

L1:

#

#condition start

#$t0 := y6
lw $t0, y6
#$t1 := 18
li $t1, 18
#if $t1 > $t0 goto L7
bgt $t1, $t0, L7

#goto L8
b L8

#L7:

L7:

#$t0 := 1
li $t0, 1
#goto L9
b L9

#L8:

L8:

#$t0 := 0
li $t0, 0
#goto L9
b L9

#L9:

L9:

#

#condition end

beqz $t0, L5

#$t0 := x5
lw $t0, x5
#result7 = $t0
sw $t0, result7
#argsno 1

addiu $sp, $sp, -4
#$t0 := result7
lw $t0, result7
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

#goto L6
b L6

#L5: 

L5:

#goto L6
b L6

#L6: 

L6:

#end function

li $v0, 10
syscall