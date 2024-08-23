meses = [
    'janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho',
    'julho', 'agosto', 'setembro', 'outubro', 'novembro', 'dezembro'
]

numero_mes = int(input("Diga qual o número do mês (1 a 12): "))

if 1 <= numero_mes <= 12:

    print(f"O mês é: {meses[numero_mes - 1]}")
else:

    print("Número inválido! Por favor, digite um número entre 1 e 12.")