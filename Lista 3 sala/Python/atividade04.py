# 4)- Ler um número N qualquer menor ou igual a 50 e exibir o valor obtido da
# multiplicação sucessiva de N por 3 enquanto o produto for menor que 250 (N*3,
# N*3*3, N*3*3*3, etc.)

n=int(input("Digite um numero menor ou igual a 50: "))
resultado=0
multi=3


if n >= 51:
    print("Numero invalido tente novamente")
else:  
    for contador in range (1,50):
        resultado=n*multi 
        n=resultado                                                   
        if  resultado > 250:
          break
        else:
            print(resultado)

#for(int contador = 1; contador < 10; contador++) 

