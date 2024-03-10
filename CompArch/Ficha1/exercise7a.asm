.data
string: .asciz "Test String"

.text
la s0, string
lb a1, 0(s0)		#current char
jal ra, str_len
li a7, 93
ecall

str_len:
addi sp, sp, -16	#store register values in the stack
sw ra, 12(sp)
sw a1, 8(sp)
sw s0, 4(sp)
li t0, 0		#string len counter
loop:
beqz a1, end
addi t0, t0, 1		#add 1 to the counter if the current char isnt '\0'
addi s0, s0, 1			#move base address of the string 1 byte
lb a1, 0(s0)
j loop
end:
mv a0, t0		#store result in a0
lw s0, 4(sp)		#restore stack
lw a1, 8(sp)
lw ra, 12(sp)
addi sp, sp, 16
ret