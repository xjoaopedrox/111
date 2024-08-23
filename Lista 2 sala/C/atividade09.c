#include <stdio.h>

int main() {
    int a, b;

    printf("Diga-me um numero X: ");
    scanf("%d", &a);

    printf("Diga-me um numero Y: ");
    scanf("%d", &b);

    printf("Numeros divisiveis por 4 ou 5:\n");

    if (a % 4 == 0 || a % 5 == 0) {
        printf("%d\n", a);
    }

    if (b % 4 == 0 || b % 5 == 0) {
        printf("%d\n", b);
    }

    return 0;
}
