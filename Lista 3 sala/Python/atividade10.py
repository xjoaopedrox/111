# 10)-  Crie  um  programa  que  exiba  no  final  o  somatório  dos  valores  pares 
# existentes na faixa de 1 até 500.

resultado=0

for contador in range (1,500+1):
    if contador%2==0:
        resultado+=contador
        print(resultado)