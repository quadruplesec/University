.data
array: .byte 1, 2, 9, -20, 2, 5 #test array
length: .word 6			#array length

.text
la s1, array
la t6, length
lw s2, 0(t6)
jal ra, max
li a7, 1			#dummy instruction so ecall doesnt return an error
j END

max:
lb t1, 0(s1)               	#largest element stored in t1
loop:
lb t2, 0(s1)		    	#current element
beqz s2, end
bge t1, t2, not_greater
mv t1, t2
not_greater:
addi s1, s1, 1
addi s2, s2, -1
j loop
end:
mv a0, t1
ret
END: ...
