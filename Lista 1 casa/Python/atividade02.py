# 2) Crie um programa que permita fazer a conversão cambial entre Dólares e Reais.
# Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo
# teclado e mostre o correspondente em Reais.


dólar = float(input("Digite quantos dólares voce quer converter:U$"))

taxa =  1 / 2.40

real = dólar/taxa

print("Aqui está a conversão R${:.2f}".format (real))