# 10) Elaborar um programa que seja uma “Calculadora”, onde o usuário deverá digitar 
# uma das seguintes teclas: ‘+’, ‘-‘, ‘*’, ‘/’ ou ‘S’. - Caso escolha ‘S’, para sair, o programa 
# deverá ser encerrado; - Caso escolha ‘+’, ‘-‘, ‘*’ ou ‘/’, como operações aritméticas, o 
# programa
# deverá solicitar a digitação de dois números quaisquer (número a e número b), um por 
# vez, realizar a respectiva operação aritmética (soma, subtração, multiplicação ou 
# divisão) entre os respectivos números (a e b, nessa ordem) e então apresentar o seu 
# resultado. Após isto, deverá voltar à etapa inicial de digitação das teclas ‘+’, ‘-‘, ‘*’, ‘/’ 
# ou ‘S’ e repetir este item até a digitação da tecla ‘S’.

while True:
     print("Seja bem-vindo a calculadora!\n");
     print("Solicite um modelo para continuar:\n");
     print("Digite + para trabalhar com adição.\n");
     print("Digite - para trabalhar com subtração.\n");
     print("Digite * para trabalhar com multiplicação.\n");
     print("Digite / para trabalhar com divisão.\n"); 
     print("Digite S para sair do programa.\n");

     M = input("Digite a operação desejada: ")



     if M == 'S' or M == 's':
          print("OBRIGADO POR USAR A CALCULADORA CALCULANDO ALGUMA COISA!!!\n")
          break
     if not  M == '+' or M == '-' or M == '*' or M == '/':
        print("NÂO DIGITE UM NUMERO! DIGITE UMA OPERAÇÃO!")
        
     a=float(input("Digite um numero na calculadora"))
     b=float(input("Digite outro numero na calculadora"))

     if M == '+':
        print("Resultado: {.2f}".format(a+b))
        break
     elif M == '-':
       print("Resultado: {.2f}".format(a-b))
       break
     elif M == '*':
       print("Resultado: {.2f}".format(a*b))
       break
     elif M == '/' and b!=0:
       print("Resultado: {.2f}".format(a/b))
       break
     else:
        print("Operação invalida! Tente novamente.\n")
        break

     











