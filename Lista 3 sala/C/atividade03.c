// 3) Exibir os resultados de uma tabuada de um número qualquer. Essa deverá
// ser impressa no seguinte formato:
// 2 X 1 = 2
// 2 X 2 = 4
// (...)
 // 2 X 10 = 20

#include <stdio.h>

int main() {
    int x, multi, resultado;

    printf("Digite um número que vou mostrar sua tabuada: ");
    scanf("%d", &x);

    for (multi = 1; multi <= 10; multi++) {
        resultado = x * multi;
        printf("%d x %d = %d\n", x, multi, resultado);
    }

    return 0;
}
