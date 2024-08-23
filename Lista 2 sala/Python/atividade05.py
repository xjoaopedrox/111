# 5)- Ler 3 valores (A, B e C) e exibir os valores dispostos em ordem crescente.

A=int(input("Digite um valor A:"))
B=int(input("Digite um valor B:"))
C=int(input("Digite um valor C:"))

if A==B and B==C and C==A:
    print("Todos os valores são iguais")
elif B>=C>=A:
    print("O valor de B é maior, a ordem crescente é B,C,A:",B,C,A)
elif C>=B>=A:
    print("o valor de C é maior, a ordem crescente é C,B,A:",C,B,A)
elif A>=B>=C:
    print("O valor de A é maior a ordem crescente é A,B,C:",A,B,C)