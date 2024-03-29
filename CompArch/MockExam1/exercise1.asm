#Considerar uma sequência de números inteiros (sem sinal, 1 byte) v com n elementos (n ≥ 0).
#Dados dois números a e b, implementar a sub-rotina filtrar que altera os elementos de v de
#acordo com a seguinte prescrição:
#
#vi ≤ a → vi = 0;
#vi ≥ b → vi = 255;
#a < vi < b → vi = vi sem alteração
#
#Caso não se verifique que a < b, nenhum elemento da sequência deve ser alterado. Em todos os
#casos, a sub-rotina deve retornar o número de elementos não alterados. A declaração da sub-rotina
#filtrar em C é (o tipo unsigned char representa um valor inteiro entre 0 e 255):
#unsigned int filtrar ( unsigned char a , unsigned char b , unsigned int n , unsigned char v []) ;

.text
.global filtrar
.type filtrar, "function"
		
#a (ub) = a0, b (ub) = a1, n (int) = a2, v[] (ub) = a3
		
filtrar:	mv t0, a2		#number of unchanged elements
  		bge a0, a1, END
  		
LOOP:		beq a2, zero, END
		lbu t1, 0(a3)		
		ble t1, a0, v_LE_a	#vi <= a
		bge t1, a1, v_GE_b	#vi >= b
		j common_case		#no change case				
				
v_LE_a:		li t5, 0
		sb t5, 0(a3)
		addi t0, t0, -1
		j common_case
		
v_GE_b:		li t5, 255
		sb t5, 0(a3)
		addi t0, t0, -1
		j common_case

common_case:	addi a3, a3, 1
		addi a2, a2, -1
		j LOOP
		
END:		mv a0, t0
		ret
