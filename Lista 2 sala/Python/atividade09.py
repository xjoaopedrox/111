# 9)- Ler 2 números inteiros e exibir os números que são divisíveis por 4 ou 5.

a = int(input("Diga-me um número X: "))
b = int(input("Diga-me um número Y: "))
c = int(input("Diga-me um número Z: "))

algum_divisivel = False

if a % 4 == 0 and a % 5 == 0:
    print("É divisivel",a)
    algum_divisivel = True

if b % 4 == 0 and b % 5 == 0:
    print("É divisivel",b)
    algum_divisivel = True

if c % 4 == 0 and c % 5 == 0:
    print("É divisivel",c)
    algum_divisivel = True

if not algum_divisivel:
    print("Nenhum número é divisível por 4 e 5.")
