#Problem: Write a snippet to determine whether two sequences of integers (32-bit) have the same content.
#Sequences have 10 elements. Use the following register allocation:
#base address of sequence A → x10
#base address of sequence B → x11
#The result, to be stored in x10, must be 0x00000001, if the two sequences are identical or
#0x00000000 otherwise.

base address of A -> x10
base address of B -> x11

if array A == array B: store 0x00000001 in x10
else: store 0x00000000 in x10

Assembly:
       addi x5,  x0,  0     # current index, starts at 0.
       addi x29, x0,  0     # return value,  0 by default
       addi x30, x0,  40    # 40   
next:  add  x6,  x5,  x10   # add index to base address of array A
       lw   x6,  0(x6)      # load the current element of A to x6
       add  x7,  x5,  x11   # add index to base address of array B
       lw   x7,  0(x7)      # load the current element of B to x7
       bne  x6,  x7,  end   # if x6 and x7 aren't equal, jump to end (would return 0)
       addi x5,  x5,  4     # add 4 to index
       bne  x5, x30  next   # if x5 is not equal to x30 (i.e. if we haven't looped 10 times), jump to next
       addi x29, x29, 1     # if x6 and x7 were equal for all 10 elements, add 1 to x29
end:   addi x10, x29, 0     # sets x10 to x29 (x10 = 1 if all elements were equal, x10 = 0 otherwise.)

