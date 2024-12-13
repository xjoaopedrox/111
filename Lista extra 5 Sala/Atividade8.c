// 8) Elabore um algoritmo que utilize um array (matriz 1D) para armazenar notas de 40 alunos, depois capture essas notas, ordene-as em ordem crescente e finalmente efetue a pesquisa.

#include <stdio.h>

int main() {
    float notas[40], pesquisa;
    int temp;

    for (int i = 0; i < 40; i++) {
        printf("Digite a nota do %dº aluno: ", i+1);
        scanf("%f", &notas[i]);
    }

    // Ordenando as notas em ordem crescente
    for (int i = 0; i < 39; i++) {
        for (int j = i + 1; j < 40; j++) {
            if (notas[i] > notas[j]) {
                temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }

    printf("Notas dos alunos em ordem crescente:\n");
    for (int i = 0; i < 40; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    printf("Qual nota você quer buscar? ");
    scanf("%f", &pesquisa);

    int encontrado = 0;
    for (int i = 0; i < 40; i++) {
        if (notas[i] == pesquisa) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Achei essa nota entre os alunos!\n");
    } else {
        printf("Não encontrei essa nota entre os alunos.\n");
    }

    return 0;
}
