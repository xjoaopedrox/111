//  1) Crie um programa que permita fazer a conversão cambial entre Reais e Dólares.
//  Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Reais pelo
//  teclado e mostre o correspondente em Dólares


#include <stdio.h>

int main() {
    float real,taxa,dolar;

    printf("Diga-me quantos reais voce quer converter:R$");
    scanf("%f", &real);

    taxa =  1 / 2.40;

    dolar = real*taxa;

    printf("Aqui está a conversão U$ %.2f\n", dolar);


    return 0;


}