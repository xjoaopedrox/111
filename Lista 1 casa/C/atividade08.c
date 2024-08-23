//  8) Faça um programa para calcular a média final de um aluno, supondo-se que há
//  quatro notas bimestrais durante o ano e que esta é calculada através de uma média
// aritmética simples (todos os bimestres têm o mesmo peso).

#include<stdio.h>

int main()
        {

    float primeiroB, segundoB, terceiroB, quartoB, media;

    printf("Qual a sua nota no primeiro bimestre? ");
    scanf("%f", &primeiroB);

    printf("Qual a sua nota no segundo bimestre? ");
    scanf("%f", &segundoB);

    printf("Qual a sua nota no terceiro bimestre? ");
    scanf("%f", &terceiroB);

    printf("Qual a sua nota no quarto bimestre? ");
    scanf("%f", &quartoB);

    media=(primeiroB+segundoB+terceiroB+quartoB)/4;

    if (primeiroB >10 || segundoB>10 || terceiroB >10 || quartoB > 10) {

     printf("Nota invalida\n"); }

    else{
    printf("Sua media foi\n", media);
        }

    return 0;






}