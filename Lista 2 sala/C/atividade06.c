#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, delta, raiz1, raiz2, raiz;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    delta = B * B - 4 * A * C;

    if (delta > 0) {
        raiz1 = (-B + sqrt(delta)) / (2 * A);
        raiz2 = (-B - sqrt(delta)) / (2 * A);
        printf("As raizes da equacao sao %.2f e %.2f.\n", raiz1, raiz2);
    } else if (delta == 0) {
        raiz = -B / (2 * A);
        printf("A equacao tem uma raiz: %.2f.\n", raiz);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}
