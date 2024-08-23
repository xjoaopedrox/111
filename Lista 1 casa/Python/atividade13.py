# 13) Num laboratório de física, em uma experiência de Movimento Uniformemente
# Variado, foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2.
# Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a
# fórmula:
# s = s0 + v0 . t + ½ . a . t2

s0 = int(2)
v0 = int(3)
a=int(10)

t=float(input("Qual o valor do tempo?"))

s= s0 + v0 * t + 0.5 * a * t**2

print("Aqui está o valor da posição final do objeto {:.2f}".format (s))
