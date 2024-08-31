# 2)- Escreva um programa para ler N (Enquanto o usuário desejar) valores
# fornecidos pelo usuário e:
# a-) calcular a média aritmética entre eles.
# b-) verificar qual é o maior e menor elemento entre os elementos lidos.
# c-) verificar a qual faixa o elemento pertence.
#  Faixa 1 – Elementos < 0
#  Faixa 2 – Elementos >=0 e < 15
#  Faixa 3 – Elementos >=15 e < 100
#  Faixa 4 – Elementos >= 1000
#  Faixa 5 – Elementos >= 101 e < 1000
#  Contabilizar - O total de elementos por faixa
# - O total da faixa
# e-) verificar quais deles são pares ou ímpares
# f-) contabilizar - Total de Pares e o total de Ímpares
# O programa deverá ser executado enquanto o usuário desejar

valores_lista = []
faixa_contadores = [0, 0, 0, 0, 0]
total_pares = 0
total_impares = 0

continuar_execucao = 's'
while continuar_execucao.lower() == 's':
    valor_atual = float(input("Digite um valor: "))
    valores_lista.append(valor_atual)

    if valor_atual < 0:
        faixa_contadores[0] += 1
    elif valor_atual >= 0 and valor_atual < 15:
        faixa_contadores[1] += 1
    elif valor_atual >= 15 and valor_atual < 100:
        faixa_contadores[2] += 1
    elif valor_atual >= 101 and valor_atual < 1000:
        faixa_contadores[4] += 1
    else:
        faixa_contadores[3] += 1

    if valor_atual % 2 == 0:
        total_pares += 1
    else:
        total_impares += 1

    continuar_execucao = input("Deseja continuar? (s/n): ")

soma_total = 0
for v in valores_lista:
    soma_total += v

if len(valores_lista) > 0:
    media_final = soma_total / len(valores_lista)
else:
    media_final = 0

maior_valor = 0
menor_valor = 0

if len(valores_lista) > 0:
    maior_valor = valores_lista[0]
    menor_valor = valores_lista[0]

    for v in valores_lista:
        if v > maior_valor:
            maior_valor = v
        if v < menor_valor:
            menor_valor = v

print(f"\nResultados:")
print(f"Média dos valores: {media_final:.2f}")
print(f"Maior valor: {maior_valor}")
print(f"Menor valor: {menor_valor}")
print(f"Total de pares: {total_pares}")
print(f"Total de ímpares: {total_impares}")
print(f"Contadores por faixa:")
print(f"Faixa 1 (< 0): {faixa_contadores[0]}")
print(f"Faixa 2 (0 a < 15): {faixa_contadores[1]}")
print(f"Faixa 3 (15 a < 100): {faixa_contadores[2]}")
print(f"Faixa 4 (>= 1000): {faixa_contadores[3]}")
print(f"Faixa 5 (101 a < 1000): {faixa_contadores[4]}")


    