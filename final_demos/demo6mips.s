.data
newline: .asciiz "\n" #for newline function
.comm x2 4   #declare x2 | 4

.comm squared4 4   #declare squared4 | 4

.comm y8 4   #declare y8 | 4

.comm cubed10 4   #declare cubed10 | 4

.comm num16 4   #declare num16 | 4

.comm result17 4   #declare result17 | 4

.text
#function square2 | 4

square2:

#infuncon

#declare x2 | 4

lw $s0, 0($sp)
sw $s0, x2
#infuncoff

#retaddress


#

#$t0 := x2
lw $t0, x2
#$t1 := x2
lw $t1, x2
#$t2 := $t0 * $t1
mult $t0, $t1
mflo $t2
#squared4 := $t2
sw $t2, squared4
#$t0 := squared4
lw $t0, squared4
#return $t0

la $v0, ($t0)

#end function

jr $ra

#function cube8 | 4

cube8:

#infuncon

#declare y8 | 4

lw $s0, 0($sp)
sw $s0, y8
#infuncoff

#retaddress


#

#$t0 := y8
lw $t0, y8
#$t1 := y8
lw $t1, y8
#$t2 := $t0 * $t1
mult $t0, $t1
mflo $t2
#$t0 := y8
lw $t0, y8
#$t1 := $t2 * $t0
mult $t2, $t0
mflo $t1
#cubed10 := $t1
sw $t1, cubed10
#$t0 := cubed10
lw $t0, cubed10
#return $t0

la $v0, ($t0)

#end function

jr $ra

#function main14 | 4

main:

#

#$t0 := 2
li $t0, 2
#num16 := $t0
sw $t0, num16
#argsno 1

addiu $sp, $sp, -4
#$t0 := num16
lw $t0, num16
#param = $t0

sw $t0, 0($sp)
# funcall square2

jal square2


#result17 = $t0
sw $t0, result17
#argsno 1

addiu $sp, $sp, -4
#$t1 := result17
lw $t1, result17
#param = $t1

sw $t1, 0($sp)
# funcall printi1852404336

lw $a0, 0($sp)
li $v0, 1
addiu $sp, $sp, 4
syscall

# funcall printn1852404336

la $a0, newline
li $v0, 4
syscall

#argsno 1

addiu $sp, $sp, -4
#$t1 := num16
lw $t1, num16
#param = $t1

sw $t1, 0($sp)
# funcall cube8

jal cube8


#result17 = $t1
sw $t1, result17
#argsno 1

addiu $sp, $sp, -4
#$t2 := result17
lw $t2, result17
#param = $t2

sw $t2, 0($sp)
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