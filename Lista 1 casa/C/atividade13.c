//  13) Num laboratório de física, em uma experiência de Movimento Uniformemente
//  Variado, foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s2.
//  Digitado o valor de t (segundos), apresentar em tela o valor de s (metros). Dada a# fórmula:
//  s = s0 + v0 . t + ½ . a . t2

#include <stdio.h>
int main(){

    int s0=2 , v0=3, a=10;
    float t,s;

    printf("Qual o valor do tempo em segundos?");
    scanf("%f",&t);

    s= s0 + v0 * t + 0.5 * a * t*t;

    printf("Aqui esta o valor da posiçao final do objeto %.2f\n",s);

    return 0;

    }