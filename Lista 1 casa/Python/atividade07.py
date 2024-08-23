# 7) Elaborar um programa para calcular e exibir o volume (V) de uma esfera e a área
# (A) de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é
# # V=4/3 _ R3 e da área é A=4_ R2.

R = float(input("Qual o raio da sua esfera?"))

V = (4/3) * 3.14159265359 * R**3
A = 4 * 3.14159265359 * R**2

print(f"O valor de sua area vale {A:.2f} e o valor de e o seu volume {V:.2f}")


