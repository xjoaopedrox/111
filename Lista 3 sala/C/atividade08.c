// 8) Crie um programa que exiba a série de Fibonacci até o décimo quinto
// termo. A série de Fibonacci é formada pela seqüência: 0, 1, 1, 2, 3, 5, 8, 13, 21,
// 34....etc. Essa série se caracteriza pela soma de um termo posterior com seu
// anterior subseqüente.

#include <stdio.h>

int main() {
    int termo_anterior = 0, termo_atual = 1, fibo;

    printf("%d\n", termo_anterior); // Exibe o primeiro termo
    printf("%d\n", termo_atual); // Exibe o segundo termo

    for (int serie = 3; serie <= 15; serie++) {
        fibo = termo_anterior + termo_atual;
        printf("%d\n", fibo);

        termo_anterior = termo_atual; // Atualiza o termo anterior
        termo_atual = fibo; // Atualiza o termo atual
    }

    return 0;
}
