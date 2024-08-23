//  6) Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular
//  e imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=_ r2
//  e do comprimento é C=2_ r.



#include <stdio.h>

int main(){

    float raio, area, comprimento;

    printf("Qual e o raio da circuferencia?:");
    scanf("%f", &raio);

    area= 3.14159265359 * raio * raio;
    comprimento = 2*3.14159265359 * raio;

    printf("a sua area e de? %.2f\ne seu comprimento vale: %.2f", area, comprimento);

    return 0;





}