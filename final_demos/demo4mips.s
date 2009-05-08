.data
newline: .asciiz "\n" #for newline function
.comm sieve5 404   #declare sieve5 | 4 * 101

.comm x6 4   #declare x6 | 4

.comm result7 4   #declare result7 | 4

.comm num10 4   #declare num10 | 4

.comm m11 4   #declare m11 | 4

.text
#function main3 | 4

main:

#$t0 := 2
li $t0, 2
#x6 = $t0
sw $t0, x6
#L0:

L0:

#$t0 := 101
li $t0, 101
#$t1 := x6
lw $t1, x6
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

beqz $t0, L1

#

#$t0 := x6
lw $t0, x6
#num10 := $t0
sw $t0, num10
#

#$t0 := 2
li $t0, 2
#m11 := $t0
sw $t0, m11
#L5:

L5:

#$t0 := 101
li $t0, 101
#$t1 := num10
lw $t1, num10
#if $t1 < $t0 goto L7
blt $t1, $t0, L7

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

beqz $t0, L6

#$t0 := x6
lw $t0, x6
#$t1 := m11
lw $t1, m11
#$t2 := $t0 * $t1
mult $t0, $t1
mflo $t2
#num10 = $t2
sw $t2, num10
#$t0 := 1
li $t0, 1
#$t1 := num10
lw $t1, num10
#$t2 := 1 * $t1
li $s0, 1
mult $s0, $t1
mflo $t2
#$t1=0+$t2

li $s0, 0
add $t1, $s0, $t2

#$t2 := $t1 * 4
li $s0, 4
mult $t1, $s0
mflo $t2
#$t1 := sieve5 offset $t2
la $t1, sieve5
add $t1, $t1, $t2

#

#$t1 = $t0
sw $t0, ($t1)
#$t0 := 1
li $t0, 1
#$t1 := m11
lw $t1, m11
#$t2=$t1+$t0

add $t2, $t1, $t0

#m11 = $t2
sw $t2, m11
#goto L5
b L5

#L6:

L6:

#$t0 := 1
li $t0, 1
#$t1 := x6
lw $t1, x6
#$t2=$t1+$t0

add $t2, $t1, $t0

#x6 = $t2
sw $t2, x6
# goto L0
b L0

#L1:

L1:

#$t0 := 13
li $t0, 13
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#$t0 := 17
li $t0, 17
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#$t0 := 22
li $t0, 22
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#$t0 := 23
li $t0, 23
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#$t0 := 97
li $t0, 97
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#$t0 := 99
li $t0, 99
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := sieve5 offset $t1
la $t0, sieve5
add $t0, $t0, $t1

#

#result7 = $t0
lw $s0, ($t0)
sw $s0, result7
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

#end function

li $v0, 10
syscall