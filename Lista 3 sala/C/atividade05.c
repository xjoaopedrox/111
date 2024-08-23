// 5) Exibir todos os números divisíveis por 4 que sejam menores que 200. Use a
// instrução Se dentro da malha do programa. A variável Contador deverá iniciar
// com o valor 1.

#include <stdio.h>

int main() {
    int contador;

    for (contador = 1; contador < 200; contador++) {
        if (contador % 4 == 0) {
            printf("%d\n", contador);
        }
    }

    return 0;
}
