#NOT WORKING; IDK!!!!

.data
v1: .byte 12, 3, -2, 8, 1
v2: .word 0, 0, 0, 0, 0

.text
	la a1, v1	#byte vector
	la a2, v2	#word vector (empty)
	li a3, 5	#counter
	jal COPY
	li a7, 10
	ecall

COPY:	addi sp, sp, -16
	sb a1, 12(sp)
	sw a2, 8(sp)
	sw a3, 4(sp)
	
LOOP:	beqz a3, END
	lbu t0, 0(a0)
	sw t0, 0(a1)
	addi a1, a0, 1
	addi a2, a1, 4
	addi, a3, a2, -1
	jal LOOP
END:	mv a0, a2
	lb a1, 12(sp)
	lw a2, 8(sp)
	lw a3, 4(sp)
	addi sp, sp, 16
	ret 	
	
	