# 6)- Calcular o valor de uma prestação em atraso, usando a fórmula: PRESTAÇÃO
# <- VALOR + (VALOR * (TAXA / 100) * TEMPO).


valor=float(input("Quanto voce deve?:"))
tempo=float(input("Qual é o tempo em dias que voce atrasou:"))
taxa=float(input("Qual o valor da taxa:"))

prestação = valor + (valor*(taxa/100))*tempo

print("Voce tem que pagar", prestação)