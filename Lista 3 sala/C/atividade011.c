// 11)-  Ler  5  números  inteiros  e  identificar  o  maior  e  o  menor  valor,  exibir  os 
// mesmos.

#include <stdio.h>

int main() {
    int x1, x2, x3, x4, x5;
    int maior, menor;

    printf("Diga um numero inteiro: ");
    scanf("%d", &x1);
    printf("Diga um numero inteiro: ");
    scanf("%d", &x2);
    printf("Diga um numero inteiro: ");
    scanf("%d", &x3);
    printf("Diga um numero inteiro: ");
    scanf("%d", &x4);
    printf("Diga um numero inteiro: ");
    scanf("%d", &x5);

    maior = x1;
    menor = x1;

    if (x2 > maior) maior = x2;
    if (x3 > maior) maior = x3;
    if (x4 > maior) maior = x4;
    if (x5 > maior) maior = x5;

    if (x2 < menor) menor = x2;
    if (x3 < menor) menor = x3;
    if (x4 < menor) menor = x4;
    if (x5 < menor) menor = x5;

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}
