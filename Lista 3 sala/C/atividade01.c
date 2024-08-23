// 1) Exibir todos os valores numéricos inteiros ímpares situados na faixa de 0 a
// 20. Para verificar se o número é ímpar, efetuar dentro da malha a verificação
// lógica dessa condição com a instrução SE, perguntando se o número é ímpar,
// sendo, exiba-o, não sendo, passe para o próximo passo.

#include <stdio.h>

int main() {
    for (int c = 0; c <= 20; c++) {
        if (c % 2 != 0) {
            printf("%d\n", c);
        }
    }
    return 0;
}
