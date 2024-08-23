// 2) Crie um programa que permita fazer a conversão cambial entre Dólares e Reais.
//  Considere como taxa de câmbio US$1,00 = R$2,40. Leia um valor em Dólares pelo
//  teclado e mostre o correspondente em Reais.


#include <stdio.h>

int main() {
    float real,taxa,dolar;

    printf("Diga-me quantos dolares voce quer converter:U$");
    scanf("%f", &dolar);

    taxa =  1 / 2.40;

    real = dolar/taxa;

    printf("Aqui está a conversão R$ %.2f\n", real);


    return 0;


}