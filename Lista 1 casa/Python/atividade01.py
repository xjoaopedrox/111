# 1) Crie um programa que permita fazer a conversão cambial entre Reais e Dólares.
# Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Reais pelo
# teclado e mostre o correspondente em Dólares

real = float(input("Digite quantos reais voce quer converter:R$"))

taxa =  1 / 2.40

dólar = real*taxa

print("Aqui está a conversão U${:.2f}".format (dólar))