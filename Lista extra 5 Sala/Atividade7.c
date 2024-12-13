// 7) Ler 20 elementos em uma matriz A tipo vetor e criar uma matriz B de mesma dimensão, com os mesmos elementos de A acrescentados de mais 2.
// Colocar os elementos da matriz B em ordem crescente. Montar uma rotina de pesquisa, para pesquisar os elementos armazenados na matriz B.

#include <stdio.h>

int main() {
    int A[20], B[20], pesquisa, encontrado = 0;
    int temp;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %d número para A: ", i+1);
        scanf("%d", &A[i]);
        B[i] = A[i] + 2; // adiciona 2 ao elemento de A
    }

    // Ordenando a matriz B em ordem crescente
    for (int i = 0; i < 19; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("Matriz B (com 2 a mais) em ordem crescente:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Qual número você quer buscar na Matriz B? ");
    scanf("%d", &pesquisa);

    for (int i = 0; i < 20; i++) {
        if (B[i] == pesquisa) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Achei esse número na Matriz B!\n");
    } else {
        printf("Não encontrei esse número na Matriz B.\n");
    }

    return 0;
}
