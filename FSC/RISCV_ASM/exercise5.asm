Vars/Regs:
Base address of sequence c = x29
count = x5

      la   x29, num
      add  x5,  x0,  x0
loop: lw   x6,  0(x29)
      beq  x6,  x0,  end
      addi x29, x29, 4
      addi x5,  x5,  1
      beq  x0,  x0,  loop
end:  ...

