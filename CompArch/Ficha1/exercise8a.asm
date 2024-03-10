.data
v1: .word 5, 7, 2, -10, 4

.text
	la a0, v1    # Adaptar para testar
	li a1, 5     # MEDIA e
	jal SOMA     # MAXMED
	li a1, 5
	jal MEDIA
	li a7, 93
	ecall

SOMA:   # Os registos t0, t1, a0 e a1 são aqui usados! 
        # Como sub-rotina "folha" apenas deverá preservar 
        # registos 's' utilizados.
        # a0 = endereço de v e a1 = tamanho
        li   t0, 0       # Soma inicial
ciclo:  beq  a1, zero, sai     
        lw   t1, (a0)
        add  t0, t0, t1  # Atualiza soma
        addi a0, a0, 4   # Atualiza endereço
        addi a1, a1, -1  # Atualiza nº elementos não somados
        j    ciclo
sai:    mv   a0, t0
	ret

MEDIA:  div t0, a0, a1
	mv a0, t0
	ret

MAXMED: # ...
	    # ...
	    ret		