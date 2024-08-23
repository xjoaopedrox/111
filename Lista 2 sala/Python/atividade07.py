# 7)- Ler um valor inteiro positivo ou negativo e exibir o número lido como sendo um valor
# positivo, ou seja, o programa devera exibir o modulo de um número fornecido. Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1.

numero = float(input("Digite um número: "))

if numero < 0:
    print(f"O número positivo é: {numero*-1}")
else:
     print(f"O número positivo é: {numero}")

