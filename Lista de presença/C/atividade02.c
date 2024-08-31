// 2)- Escreva um programa para ler N (Enquanto o usuário desejar) valores
// fornecidos pelo usuário e:
// a-) calcular a média aritmética entre eles.
// b-) verificar qual é o maior e menor elemento entre os elementos lidos.
// c-) verificar a qual faixa o elemento pertence.
//  Faixa 1 – Elementos < 0
//  Faixa 2 – Elementos >=0 e < 15
//  Faixa 3 – Elementos >=15 e < 100
//  Faixa 4 – Elementos >= 1000
//  Faixa 5 – Elementos >= 101 e < 1000
//  Contabilizar - O total de elementos por faixa
// - O total da faixa
// e-) verificar quais deles são pares ou ímpares
// f-) contabilizar - Total de Pares e o total de Ímpares
// O programa deverá ser executado enquanto o usuário desejar


#include <stdio.h>

int main() {
    float valores_lista[100];
    int faixa_contadores[5] = {0, 0, 0, 0, 0};
    int total_pares = 0, total_impares = 0;
    float valor_atual;
    int i = 0;
    char continuar_execucao = 's';

    while (continuar_execucao == 's') {
        printf("Digite um valor: ");
        scanf("%f", &valor_atual);
        valores_lista[i] = valor_atual;

        if (valor_atual < 0) {
            faixa_contadores[0]++;
        } else if (valor_atual >= 0 && valor_atual < 15) {
            faixa_contadores[1]++;
        } else if (valor_atual >= 15 && valor_atual < 100) {
            faixa_contadores[2]++;
        } else if (valor_atual >= 101 && valor_atual < 1000) {
            faixa_contadores[4]++;
        } else {
            faixa_contadores[3]++;
        }

        if ((int)valor_atual % 2 == 0) {
            total_pares++;
        } else {
            total_impares++;
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar_execucao);
        i++;
    }

    float soma_total = 0;
    for (int j = 0; j < i; j++) {
        soma_total += valores_lista[j];
    }

    float media_final = (i > 0) ? (soma_total / i) : 0;

    float maior_valor = valores_lista[0];
    float menor_valor = valores_lista[0];

    for (int j = 0; j < i; j++) {
        if (valores_lista[j] > maior_valor) {
            maior_valor = valores_lista[j];
        }
        if (valores_lista[j] < menor_valor) {
            menor_valor = valores_lista[j];
        }
    }

    printf("\nResultados:\n");
    printf("Media dos valores: %.2f\n", media_final);
    printf("Maior valor: %.2f\n", maior_valor);
    printf("Menor valor: %.2f\n", menor_valor);
    printf("Total de pares: %d\n", total_pares);
    printf("Total de impares: %d\n", total_impares);
    printf("Contadores por faixa:\n");
    printf("Faixa 1 (< 0): %d\n", faixa_contadores[0]);
    printf("Faixa 2 (0 a < 15): %d\n", faixa_contadores[1]);
    printf("Faixa 3 (15 a < 100): %d\n", faixa_contadores[2]);
    printf("Faixa 4 (>= 1000): %d\n", faixa_contadores[3]);
    printf("Faixa 5 (101 a < 1000): %d\n", faixa_contadores[4]);

    return 0;
}
