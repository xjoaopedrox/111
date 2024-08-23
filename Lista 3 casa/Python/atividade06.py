# 6)  Elaborar  um  programa  que  escreva  em  tela  os  números  de  20  a  1,  informando 
# quando eles são pares e quando são ímpares, utilizando o comando for()

n=0

for contador in range (1,20+1):
    n=contador
    if n%2 == 0:
        print(n,"par")
    else:
        print(n,"impar")
    
    