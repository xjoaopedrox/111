# 6) Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular
# e imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=_ r2
# e do comprimento é C=2_ r.


raio=float(input("Qual o raio da circunferência?"))

area= 3.14159265359 * raio * raio
comprimento = 2*3.14159265359 * raio


print(f"a area da sua circunferência vale {area:.2f} e o comprimento {comprimento:.2f}")