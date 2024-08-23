# 7)- Exibir as potencias e 3 variando de 0 a 15. Deve ser considerado que 
# qualquer número elevado a zero é 1 e elevado a 1 é ele mesmo.
# 3 elevado a 0 = 1
# 3 elevado a 1 = 3
# (...)
# 3 elevado a 15 = 1434890

resultado=0
potencia=3


for contador in range (0,15+1):
        
        x=contador
        resultado=x**3
        print("O número {} elevado ao cubo é: {}".format(x, resultado))
 
    