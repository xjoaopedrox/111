// 2) Exibir o total da soma obtido dos cem primeiros números inteiros
// (1+2+3+4+5+.....+97+98+99+100).

#include <stdio.h>

int main() {
    int soma = 0;

    for (int contador = 1; contador <= 100; contador++) {
        soma += contador;
    }
    printf("%d\n", soma);
    return 0;
}
