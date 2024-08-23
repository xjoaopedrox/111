// 7) Elaborar um programa para calcular e exibir o volume (V) de uma esfera e a área
// (A) de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é
// V=4/3 _ R3 e da área é A=4_ R2.

#include<stdio.h>
int main() {

    float   V,A,R;
 
    printf("Qual o raio da sua esfera?");
    scanf("%f", &R);

    V = (4.0 / 3.0) * 3.14159265359 * R * R * R;

    A = 4 * 3.14159265359 * R * R;

    printf("Seu volume vale:  %.2f\ne seu raio %.2f", V, A);


    return 0;

    }