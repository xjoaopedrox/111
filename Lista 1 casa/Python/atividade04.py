# 4) Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via
# teclado, calcule a área e o perímetro deste retângulo.
# A = altura * base
# P = 2 * altura + 2 * base

altura = float(input("Qual o valor da altura do retângulo?: "))
base = float(input("Qual o valor da base do retângulo?: "))

A = altura * base
P = 2 * altura + 2 * base

print(f"O valor da área do seu retângulo é {A:.2f} e o valor do perímetro é {P:.2f}")
