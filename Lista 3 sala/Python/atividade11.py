# 11)-  Ler  5  números  inteiros  e  identificar  o  maior  e  o  menor  valor,  exibir  os 
# mesmos.
x1=int(input("Diga um numero inteiro: "))
x2=int(input("Diga um numero inteiro: "))
x3=int(input("Diga um numero inteiro: "))
x4=int(input("Diga um numero inteiro: "))
x5=int(input("Diga um numero inteiro: "))

#MAIORES

if x1>=x2 and x3 and x4 and x5:
    print("O maior numero é ", x1)

elif x2 >= x3 and x4 and x5:
    print("O maior numero é ", x2)

elif x3>=x4 and x5:
    print("O maior numero é ",x3)

elif x4>=x5:
    print("O maior numero é ",x4)

else:
    print("O maior numero é ",x5)

#MENORES

if x1<=x2 and x3 and x4 and x5:
    print("O menor numero é ", x1)

elif x2 <= x3 and x4 and x5:
    print("O menor numero é ", x2)

elif x3<=x4 and x5:
    print("O menor numero é ",x3)

elif x4<=x5:
    print("O menor numero é ",x4)

else:
    print("O menor numero é ",x5)
