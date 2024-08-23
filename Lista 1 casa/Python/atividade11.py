# 11) (DESAFIO) Idem o programa anterior, sem utilizar-se de uma 3a. variável.

A=int(input("Qual o valor de A?"))
B=int(input("Qual o valor de B?"))

A, B = B, A


print("Aqui os valores trocados de A:", A ,"Aqui os valores trocados de B:",B)