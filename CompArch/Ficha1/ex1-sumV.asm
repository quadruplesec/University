.data
seq: .word   3, 5, -1, 19, 32

.text
      la   a0, seq    # Para efeitos de teste: endereço de
      li   a1, 5      # seq em a0 e tamanho de seq em a1.
      jal  ra, soma   # Invoca sub-rotina.
      li   a7, 10     # Syscall para
      ecall           # terminar programa.  
soma: mv   t0, zero         
ciclo:beq  a1, zero, fim
      lw   t1, 0(a0)
      add  t0, t0, t1
      addi a0, a0, 4
      addi a1, a1, -1
      j    ciclo
fim:  mv   a0, t0
      ret
