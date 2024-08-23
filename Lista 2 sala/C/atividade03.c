#include <stdio.h>

int main() {
    float V1, V2, diferenca;

    printf("Diga um valor: ");
    scanf("%f", &V1);

    printf("Diga outro valor: ");
    scanf("%f", &V2);

    if (V1 > V2) {
        diferenca = V1 - V2;
    } else {
        diferenca = V2 - V1;
    }

    printf("Diferenca: %.2f\n", diferenca);

    return 0;
}
