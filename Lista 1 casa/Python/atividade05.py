# 5) A condição física de uma pessoa pode ser medida com base no cálculo do IMC,
# Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa ( em kg)
# pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h²). Escreva um
# programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC.


massa=float(input("Qual a sua massa em quilogramas?"))
altura=float(input("Qual a sua altura em metros?"))

IMC= massa/(altura*altura)

print(f"Seu índice de massa corporal é de {IMC:.2f}")
