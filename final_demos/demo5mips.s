.data
newline: .asciiz "\n" #for newline function
.comm mtable4 4000   #declare mtable4 | 4 * 1000

.comm a5 4   #declare a5 | 4

.comm b6 4   #declare b6 | 4

.comm c7 4   #declare c7 | 4

.comm result8 4   #declare result8 | 4

.text
#function main2 | 4

main:

#$t0 :=  0
li $t0, 0
#a5 = $t0
sw $t0, a5
#L0:

L0:

#$t0 := 10
li $t0, 10
#$t1 := a5
lw $t1, a5
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

#$t0 :=  0
li $t0, 0
#b6 = $t0
sw $t0, b6
#L5:

L5:

#$t0 := 10
li $t0, 10
#$t1 := b6
lw $t1, b6
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

#$t0 :=  0
li $t0, 0
#c7 = $t0
sw $t0, c7
#L10:

L10:

#$t0 := 10
li $t0, 10
#$t1 := c7
lw $t1, c7
#if $t1 < $t0 goto L12
blt $t1, $t0, L12

#goto L13
b L13

#L12:

L12:

#$t0 := 1
li $t0, 1
#goto L14
b L14

#L13:

L13:

#$t0 := 0
li $t0, 0
#goto L14
b L14

#L14:

L14:

beqz $t0, L11

#$t0 := a5
lw $t0, a5
#$t1 := b6
lw $t1, b6
#$t2 := $t0 * $t1
mult $t0, $t1
mflo $t2
#$t0 := c7
lw $t0, c7
#$t1 := $t2 * $t0
mult $t2, $t0
mflo $t1
#$t0 := c7
lw $t0, c7
#$t2 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t2
#$t0=0+$t2

li $s0, 0
add $t0, $s0, $t2

#$t2 := b6
lw $t2, b6
#$t3 := 10 * $t2
li $s0, 10
mult $s0, $t2
mflo $t3
#$t2=$t0+$t3

add $t2, $t0, $t3

#$t0 := a5
lw $t0, a5
#$t3 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t3
#$t0=$t2+$t3

add $t0, $t2, $t3

#$t2 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t2
#$t0 := mtable4 offset $t2
la $t0, mtable4
add $t0, $t0, $t2

#

#$t0 = $t1
sw $t1, ($t0)
#$t0 := 1
li $t0, 1
#$t1 := c7
lw $t1, c7
#$t2=$t1+$t0

add $t2, $t1, $t0

#c7 = $t2
sw $t2, c7
# goto L10
b L10

#L11:

L11:

#$t0 := 1
li $t0, 1
#$t1 := b6
lw $t1, b6
#$t2=$t1+$t0

add $t2, $t1, $t0

#b6 = $t2
sw $t2, b6
# goto L5
b L5

#L6:

L6:

#$t0 := 1
li $t0, 1
#$t1 := a5
lw $t1, a5
#$t2=$t1+$t0

add $t2, $t1, $t0

#a5 = $t2
sw $t2, a5
# goto L0
b L0

#L1:

L1:

#$t0 := 6
li $t0, 6
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := 5
li $t1, 5
#$t2 := 10 * $t1
li $s0, 10
mult $s0, $t1
mflo $t2
#$t1=$t0+$t2

add $t1, $t0, $t2

#$t0 := 2
li $t0, 2
#$t2 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t2
#$t0=$t1+$t2

add $t0, $t1, $t2

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := mtable4 offset $t1
la $t0, mtable4
add $t0, $t0, $t1

#

#result8 = $t0
lw $s0, ($t0)
sw $s0, result8
#argsno 1

addiu $sp, $sp, -4
#$t0 := result8
lw $t0, result8
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

#$t0 := 2
li $t0, 2
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := 6
li $t1, 6
#$t2 := 10 * $t1
li $s0, 10
mult $s0, $t1
mflo $t2
#$t1=$t0+$t2

add $t1, $t0, $t2

#$t0 := 5
li $t0, 5
#$t2 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t2
#$t0=$t1+$t2

add $t0, $t1, $t2

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := mtable4 offset $t1
la $t0, mtable4
add $t0, $t0, $t1

#

#result8 = $t0
lw $s0, ($t0)
sw $s0, result8
#argsno 1

addiu $sp, $sp, -4
#$t0 := result8
lw $t0, result8
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

#$t0 := 5
li $t0, 5
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := 3
li $t1, 3
#$t2 := 10 * $t1
li $s0, 10
mult $s0, $t1
mflo $t2
#$t1=$t0+$t2

add $t1, $t0, $t2

#$t0 := 4
li $t0, 4
#$t2 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t2
#$t0=$t1+$t2

add $t0, $t1, $t2

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := mtable4 offset $t1
la $t0, mtable4
add $t0, $t0, $t1

#

#result8 = $t0
lw $s0, ($t0)
sw $s0, result8
#argsno 1

addiu $sp, $sp, -4
#$t0 := result8
lw $t0, result8
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

#$t0 := 6
li $t0, 6
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := 5
li $t1, 5
#$t2 := 10 * $t1
li $s0, 10
mult $s0, $t1
mflo $t2
#$t1=$t0+$t2

add $t1, $t0, $t2

#$t0 := 2
li $t0, 2
#$t2 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t2
#$t0=$t1+$t2

add $t0, $t1, $t2

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := mtable4 offset $t1
la $t0, mtable4
add $t0, $t0, $t1

#

#$t1 := 2
li $t1, 2
#$t2 := 1 * $t1
li $s0, 1
mult $s0, $t1
mflo $t2
#$t1=0+$t2

li $s0, 0
add $t1, $s0, $t2

#$t2 := 6
li $t2, 6
#$t3 := 10 * $t2
li $s0, 10
mult $s0, $t2
mflo $t3
#$t2=$t1+$t3

add $t2, $t1, $t3

#$t1 := 5
li $t1, 5
#$t3 := 100 * $t1
li $s0, 100
mult $s0, $t1
mflo $t3
#$t1=$t2+$t3

add $t1, $t2, $t3

#$t2 := $t1 * 4
li $s0, 4
mult $t1, $s0
mflo $t2
#$t1 := mtable4 offset $t2
la $t1, mtable4
add $t1, $t1, $t2

#

#$t2 := $t0 * $t1
lw $s0, ($t0)
lw $s1, ($t1)
mult $s0, $s1
mflo $t2
#result8 = $t2
sw $t2, result8
#argsno 1

addiu $sp, $sp, -4
#$t0 := result8
lw $t0, result8
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

#$t0 := 7
li $t0, 7
#$t1 := 1 * $t0
li $s0, 1
mult $s0, $t0
mflo $t1
#$t0=0+$t1

li $s0, 0
add $t0, $s0, $t1

#$t1 := 1
li $t1, 1
#$t2 := 10 * $t1
li $s0, 10
mult $s0, $t1
mflo $t2
#$t1=$t0+$t2

add $t1, $t0, $t2

#$t0 := 1
li $t0, 1
#$t2 := 100 * $t0
li $s0, 100
mult $s0, $t0
mflo $t2
#$t0=$t1+$t2

add $t0, $t1, $t2

#$t1 := $t0 * 4
li $s0, 4
mult $t0, $s0
mflo $t1
#$t0 := mtable4 offset $t1
la $t0, mtable4
add $t0, $t0, $t1

#

#result8 = $t0
lw $s0, ($t0)
sw $s0, result8
#argsno 1

addiu $sp, $sp, -4
#$t0 := result8
lw $t0, result8
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