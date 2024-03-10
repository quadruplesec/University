.text
.global CheckABS

# a0 = valor "limite" X
# a1 = tamanho do vetor
# a2 = endereço do vetor
     
CheckABS:
       li   t0, 0        # Contador de ocorrências
iter:  lw   t1, 0(a2)    # Lê elemento do vetor
       bgtu t1, zero, pos
       neg  t1, t1       # Valor absoluto do elemento lido
pos:   bleu t1, a0, prox
       sw   zero, 0(a2)  # Como |elemento|>a0 então elemento torna-se 0
prox:  addi a2, a2, 4    # Atualiza endereço   
       addi a1, a1, -1   # Atualiza iterações em falta
       bne  a1, zero, iter 
       mv   a0, t0       # Coloca resultado em a0
       ret
       
