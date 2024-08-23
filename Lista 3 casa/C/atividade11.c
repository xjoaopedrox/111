// 11) Escreva um programa para mostrar na tela os resultados de uma tabuada de um 
// número qualquer fornecido via teclado.
// Exemplo:
// Digite o número para a tabuada: 5 <Enter>
// Tabuada do 5:
// 5 x 0 = 0
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 5

#include <stdio.h>
int main(){
int multi, resultado,count=10,numero;

printf("Digite um numero de 1 a 10: ");
scanf("%i",&numero);

for ( multi= 1; multi <= count; multi++)
{
    resultado= numero*multi;
    printf("%i x %i = %i\n", numero, multi, resultado);
}


// x=int(input("Digite um número que vou mostrar sua tabuada:"))
// multi=1
// resultado=0
// for multi in range (1,10+1):

//     resultado = x*multi

//     print(x,"x",multi,"=",resultado)










    return 0;
}