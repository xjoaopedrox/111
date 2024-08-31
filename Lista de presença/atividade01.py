# 1)-A empresa XYZ decidiu conceder um aumento de salários a seus funcionários
# de acordo com a tabela abaixo:
# SALÁRIO ATUAL (R$) ÍNDICE DE AUMENTO 0,00 – 400,00 15% 401,00 –
# 700,00 12% 701,00 – 1000,00 10% 1001,00 – 1800,00 7% 1801,00 – 2500,00
# 4% ACIMA DE 2500,00 SEM AUMENTO
# Escrever um programa que lê, para um funcionário, o seu nome e o seu salário
# atual. Após receber estes dados, o algoritmo calcula o novo salário e escreve na
# tela as seguintes informações: ➢ nome do funcionário ➢ % de aumento ➢
# salário atual ➢ novo salário

nome=str(input("Qual seu nome? "))
salario=float(input("Qual seu salario? "))
novo_salario=salario

if salario >= 0 and salario <=400.00:
    novo_salario+=(salario*12)/100
    print("Olá!\t{}\n Dado a consulta do nosso sistema vamos aumentar seu salario que é {} para 12% que fica {}".format(nome,salario,novo_salario))

if salario >= 401.00 and salario <= 700.00:
    novo_salario+=(salario*15)/100
    print("Olá!\t{}\n Dado a consulta do nosso sistema vamos aumentar seu salario que é {} para 15% que fica {}".format(nome,salario,novo_salario))

if salario >= 701.00 and salario <=1000.00:
    novo_salario+=(salario*10)/100
    print("Olá!\t{}\n Dado a consulta do nosso sistema vamos aumentar seu salario que é {} para 10% que fica {}".format(nome,salario,novo_salario))

if salario >= 1001.00 and salario <= 1800.00:
    novo_salario+=(salario*7)/100
    print("Olá!\t{}\n Dado a consulta do nosso sistema vamos aumentar seu salario que é {} para 7% que fica {}".format(nome,salario,novo_salario))

if salario >= 1801.00 and salario <= 2500.00:
    novo_salario+=(salario*4)/100
    print("Olá!\t{}\n Dado a consulta do nosso sistema vamos aumentar seu salario que é {} para 4% que fica {}".format(nome,salario,novo_salario))

if salario >2500.00:
    print(nome,"Seu salario nao tem bonus, portanto continuará o mesmo", salario)



