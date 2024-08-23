# 5)  Elaborar  um  programa  que  escreva  em  tela  todos  os  números  impares  existentes 
# entre 1 e 20, utilizando o comando for( ). 

for contador in range(1,20+1):
    impar=contador
    if not impar%2==0:
        print(impar)