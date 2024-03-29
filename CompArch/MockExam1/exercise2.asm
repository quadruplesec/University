#Para um vetor tridimensional x = (x1, x2, x3) podem definir-se normas para vários valores de p
#(número inteiro positivo) da seguinte forma (para i = 1..3):
#
#https://i.imgur.com/KYjIx9B.png
#
#A sub-rotina norma recebe uma sequência de 3 elementos em vírgula flutuante, precisão dupla
#(v[]), representando as coordenadas xi do vetor x, o valor de p (p ≥ 0) e retorna o valor da
#correspondente norma.
#Para isso, recorre à sub-rotina raizN que calcula a n-ésima raiz de um número real não-negativo.
#Esta recebe o número real em fa0, o valor de N em a0 e devolve o resultado em fa0. Importante:
#Considerar que esta sub-rotina já está disponível; não deve ser incluída no ficheiro submetido.
#A declaração da sub-rotina norma para uso num programa escrito em C é:
#float norma ( float v [] , unsigned int p);

.text
.global norma
.type norma, "function"

#float v[] = a0, unsigned int p = a1
norma:
		li t0, 0
		fcvt.s.w ft0, t0	#fzero
		li t2, -1
		fcvt.s.w ft1, t2	#fminus1
		flw fs0, 0(a0)
		flw fs1, 4(a0)
		flw fs2, 8(a0) 
		flt.s t1, ft0, fs0
		beqz t1, x1_neg
r1:		flt.s t1, ft0, fs1
		beqz t1, x2_neg
r2:		flt.s t1, ft0, fs2
		beqz t1, x3_neg
r3:		beqz a1, PZERO			#until here all good, apparently
		mv t6, a1			#save p
		addi a1, a1, -1
		fmv.s ft0, fs0 
		fmv.s ft1, fs1
		fmv.s ft2, fs2
loop:		beqz a1, END_LOOP
		fmul.s fs0, fs0, ft0
		fmul.s fs1, fs1, ft1
		fmul.s fs2, fs2, ft2
		addi a1, a1, -1
		j loop
		
END_LOOP:	fadd.s fa0, fs0, fs1
		fadd.s fa0, fa0, fs2
		mv a0, t6
		li t0, 1
		beq t0, a0, END
		sw ra, 0(sp)
		jal raizN
		lw ra, 0(sp)
		j END	
		
PZERO:		fmax.s ft3, fs0, fs1
		fmax.s ft3, ft3, fs2
		fmv.s fa0, ft3
		j END

END:		ret

x1_neg:		fmul.s fs0, fs0, ft1
		j r1
x2_neg:		fmul.s fs1, fs1, ft1
		j r2
x3_neg:		fmul.s fs2, fs2, ft1
		j r2
