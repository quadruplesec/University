.data
n : .word 3 #placeholder value
n
.text
	la t0, n
	lw t0, 0(t0)         #load n into a0
	li t2, 0	     #sum
sum: 	beqz t0, end
	jal ra, square
	add t2, t2, a0
	addi t0, t0, -1
	j sum
square:	mul t3, t0, t0
	mv a0, t3
	ret
end:	mv a0, t2	     #result of sum stored in a0
	li a7, 93
	ecall
	
	
