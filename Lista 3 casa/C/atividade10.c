// 10) Elaborar um programa que seja uma “Calculadora”, onde o usuário deverá digitar 
// uma das seguintes teclas: ‘+’, ‘-‘, ‘*’, ‘/’ ou ‘S’. - Caso escolha ‘S’, para sair, o programa 
// deverá ser encerrado; - Caso escolha ‘+’, ‘-‘, ‘*’ ou ‘/’, como operações aritméticas, o 
// programa
// deverá solicitar a digitação de dois números quaisquer (número a e número b), um por 
// vez, realizar a respectiva operação aritmética (soma, subtração, multiplicação ou 
// divisão) entre os respectivos números (a e b, nessa ordem) e então apresentar o seu 
// resultado. Após isto, deverá voltar à etapa inicial de digitação das teclas ‘+’, ‘-‘, ‘*’, ‘/’ 
// ou ‘S’ e repetir este item até a digitação da tecla ‘S

#include<stdio.h>
int main(){

float a,b;
char M;


while (1)
{
    printf("Seja bem-vindo a calculadora!\n");
    printf("Solicite um modelo para continuar:\n");
    printf("Digite + para trabalhar com adicao.\n");
    printf("Digite - para trabalhar com subtracao.\n");
    printf("Digite * para trabalhar com multiplicacao.\n");
    printf("Digite / para trabalhar com divisao.\n"); 
    printf("Digite S para sair do programa.\n"); 
    scanf(" %c",&M);

        if (M == 'S' || M == 's') {
       printf("OBRIGADO POR USAR A CALCULADORA CALCULANDO ALGUMA COISA!!!\n");
        break;
    }
        if (!(  M == '+' || M == '-' || M == '*' || M == '/'))
        {
          printf("NAO DIGITE UM NUMERO! DIGITE UMA OPERACAO!");
          break;
        }
        
    
    printf("Digite um numero na calculadora: ");
    scanf (" %f",&a);

    printf("Digite outro numero na calculadora: ");
    scanf (" %f", &b);

    switch (M)
    {
    case '+':
        printf("Resultado: %.2f\n",a+b);
        break;
    case '-':
        printf("Resultado: %.2f\n",a-b);
        break;
    case '*':
        printf("Resultado: %.2f\n",a * b);
        break;
    case '/':

        if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
        } else{
        printf("ERRO NUMERO DIVISIVEL POR ZERO NÂO DA\n");
        }
        break;
  
    default:
        printf("Operacao invalida! Tente novamente.\n");

        break;
    }

}

return 0;


}