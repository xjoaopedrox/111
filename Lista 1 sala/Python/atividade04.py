# 4)- Ler dois valores A e B, efetuar a troca dos mesmos de forma que a variável A
# passe a ter o valor da variável B e vice-versa. Exibir os valores trocados.



A=int(input("Qual o valor de A?"))
B=int(input("Qual o valor de B?"))

A, B = B, A


print("Aqui os valores trocados de A:", A ,"Aqui os valores trocados de B:",B)