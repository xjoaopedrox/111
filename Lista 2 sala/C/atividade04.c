#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor A: ");
    scanf("%f", &A);

    printf("Digite o valor B: ");
    scanf("%f", &B);

    printf("Digite o valor C: ");
    scanf("%f", &C);

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        printf("Seus valores formam um triangulo\n");

        if (A == B && B == C) {
            printf("Seu triangulo e equilatero\n");
        } else if (A == B || B == C || A == C) {
            printf("Seu triangulo e isosceles\n");
        } else {
            printf("Seu triangulo e escaleno\n");
        }
    } else {
        printf("Infelizmente seus lados nao formam um triangulo\n");
    }

    return 0;
}
