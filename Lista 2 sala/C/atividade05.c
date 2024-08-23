#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite um valor A: ");
    scanf("%d", &A);

    printf("Digite um valor B: ");
    scanf("%d", &B);

    printf("Digite um valor C: ");
    scanf("%d", &C);

    if (A == B && B == C) {
        printf("Todos os valores sao iguais\n");
    } else if (B >= C && C >= A) {
        printf("O valor de B e maior, a ordem crescente e B, C, A: %d %d %d\n", B, C, A);
    } else if (C >= B && B >= A) {
        printf("O valor de C e maior, a ordem crescente e C, B, A: %d %d %d\n", C, B, A);
    } else if (A >= B && B >= C) {
        printf("O valor de A e maior, a ordem crescente e A, B, C: %d %d %d\n", A, B, C);
    }

    return 0;
}
