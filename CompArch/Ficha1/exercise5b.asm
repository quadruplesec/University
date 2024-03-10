.data
array: .word -1, 34, -2, 39, -3

.text
la s0, array
lw s1, 0(s0)		#loads first element of the array into s1. this register will hold the current highest (unsigned) element of the array.
li s2, 5		#loads the length of the array into s2.
jal ra, max
li a7, 93
ecall

max:
addi sp, sp, -16	#pushes the stack back
sw ra, 12(sp)		#store ra, s1, and s2 in the stack to be restored later
sw s1, 8(sp)
sw s2, 4(sp)
loop:
beqz s2, end
lw t0, 0(s0)		#loads the current element 0 of the array into t0
bleu t0, s1, is_leu	#branch to is_leu if t0 < s1
mv s1, t0		#if it does not branch, it means t0 >= s1. reassign the value of s1 to the current value of t0.
is_leu:
addi s0, s0, 4
addi s2, s2, -1
j loop
end:
mv a0, s1		#moves result of the function to a0
lw ra, 12(sp)		#restores ra, s1, and s2 from the stack
lw s1, 8(sp)
lw s2, 4(sp)
addi sp, sp, 16		#restores the stack
ret			
