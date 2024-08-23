#  12) Elaborar um programa que receba, via teclado, os valores do espaço percorrido e
#  do tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua
#  velocidade média.

s=float(input("Qual foi o espaço percorrido em metros?:"))
t=float(input("Qual foi o tempo gasto em segundos?:"))

velocidade_media= s/t


print("Velocidade media vai ser de{:.2f}".format (velocidade_media))


