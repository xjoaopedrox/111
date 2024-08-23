// 11) (DESAFIO) Idem o programa anterior, sem utilizar-se de uma 3a. variável.


#include <stdio.h>

int main() {
    float A, B;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

 
    A = B;
    B = A;

    printf("Este e o valor atual de A: %.2f\n", A);
    printf("Este e o valor atual de B: %.2f\n", B);

    return 0;
}
