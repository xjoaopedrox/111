//  12) Elaborar um programa que receba, via teclado, os valores do espaço percorrido e
//  do tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua
//  velocidade média.

#include <stdio.h>
int main()
{

    float s,t,velocidade_media;
    printf("Qual foi o espaco percorrido em metros?:");
    scanf("%f",&s);

    printf("Qual foi o tempo gasto em segundos?:");
    scanf("%f",&t);

    velocidade_media= s/t;

    printf("Sua velocidade media vale %.2f\n",velocidade_media);
}