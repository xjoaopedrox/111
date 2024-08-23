// 9) Elaborar um programa que escreva em tela os números de 1 a 20, informando 
// quando eles são pares e quando são ímpares, utilizando o comando do-while( ).

#include <stdio.h>

int main() {

int n=1;

do{
    if (n%2==0)
    {   
    printf("numero par:   %i\n",n);
    }
    else
    printf("numero impar: %i\n", n);
    n=n+1;

}while (n<=20);

    return 0;
}