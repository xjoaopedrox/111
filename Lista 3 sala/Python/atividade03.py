# 3)- Exibir os resultados de uma tabuada de um número qualquer. Essa deverá
# ser impressa no seguinte formato:
# 2 X 1 = 2
# 2 X 2 = 4
# (...)
# 2 X 10 = 20

x=int(input("Digite um número que vou mostrar sua tabuada:"))
multi=1
resultado=0
for multi in range (1,10+1):

    resultado = x*multi

    print(x,"x",multi,"=",resultado)


