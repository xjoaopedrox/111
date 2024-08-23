//  4) Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via
//  teclado, calcule a área e o perímetro deste retângulo.
//  A = altura * base
//  P = 2 * altura + 2 * base


#include <stdio.h>

int main(){

    float altura, base, P, A;

    printf("Qual o valor da altura do retangulo?: ");
    scanf("%f", &altura);
    
    printf("Qual o valor da base do retangulo?: ");
    scanf("%f", &base);


    A = altura * base;
    P = 2 * altura + 2 * base;


    printf("O valor da area foi de: %.2f\nO valor do perimetro foi de: %.2f", A, P);

    return 0;


}