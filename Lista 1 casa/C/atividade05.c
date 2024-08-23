//  5) A condição física de uma pessoa pode ser medida com base no cálculo do IMC,
//  Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa ( em kg)
//  pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h²). Escreva um
//  programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC.


#include<stdio.h>

int main(){

    float massa, altura, IMC;

    printf("Qual a sua massa em quilogramas?:");
    scanf("%f",&massa);

    printf("Qual a sua altura em metros?:");
    scanf("%f",&altura);

    IMC = massa / (altura * altura);

    printf("Seu indice de massa corporal vale %.2f",IMC);

    return 0;



}
