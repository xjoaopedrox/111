#include <stdio.h>

int main() {
    int a, b, c;
    int algum_divisivel = 0;

    printf("Diga-me um número X: ");
    scanf("%d", &a);

    printf("Diga-me um número Y: ");
    scanf("%d", &b);

    printf("Diga-me um número Z: ");
    scanf("%d", &c);

    if (a % 2 == 0 && a % 3 == 0) {
        printf("É divisível %d\n", a);
        algum_divisivel = 1;
    }

    if (b % 2 == 0 && b % 3 == 0) {
        printf("É divisível %d\n", b);
        algum_divisivel = 1;
    }

    if (c % 2 == 0 && c % 3 == 0) {
        printf("É divisível %d\n", c);
        algum_divisivel = 1;
    }

    if (!algum_divisivel) {
        printf("Nenhum número é divisível por 2 e 3.\n");
    }

    return 0;
}
