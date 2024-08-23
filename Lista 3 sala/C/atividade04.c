// 4) Ler um número N qualquer menor ou igual a 50 e exibir o valor obtido da
// multiplicação sucessiva de N por 3 enquanto o produto for menor que 250
// (N*3, N*3*3, N*3*3*3, etc.)

#include <stdio.h>

int main() {
    int n, resultado;
    int multi = 3;

    printf("Digite um numero menor ou igual a 50: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Numero invalido, tente novamente.\n");
    } else {
        resultado = n;
        while (resultado < 250) {
            resultado *= multi;
            if (resultado < 250) {
                printf("%d\n", resultado);
            }
        }
    }

    return 0;
}
