# 8)- Ler 3 números inteiros e exibir os números que são divisíveis por 2 e 3.

a = int(input("Diga-me um número X: "))
b = int(input("Diga-me um número Y: "))
c = int(input("Diga-me um número Z: "))

algum_divisivel = False

if a % 2 == 0 and a % 3 == 0:
    print("É divisivel",a)
    algum_divisivel = True

if b % 2 == 0 and b % 3 == 0:
    print("É divisivel",b)
    algum_divisivel = True

if c % 2 == 0 and c % 3 == 0:
    print("É divisivel",c)
    algum_divisivel = True

if not algum_divisivel:
    print("Nenhum número é divisível por 2 e 3.")
