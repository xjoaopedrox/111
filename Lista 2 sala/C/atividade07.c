#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    printf("O numero positivo e: %.2f\n", numero);


    return 0;
}
