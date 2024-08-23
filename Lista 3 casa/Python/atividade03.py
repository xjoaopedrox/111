# 3)  Elaborar  um  programa  que  escreva  em  tela  os  números  de  1  a  20,  informando 
# quando eles são pares e quando são ímpares, utilizando o comando while( ). 

n=1
while n<=20:
    if n%2==0:
        print("par",n)
    else:
        print("impar",n)
    n+=1

print("fim")
