// 5) Ler 20 elementos em uma matriz A tipo vetor e 30 elementos em uma matriz B. Criar uma matriz C, sendo esta a junção das duas outras matrizes.
// Dessa forma, a matriz C deverá ter a capacidade de armazenar 50 elementos. Exibir os elementos da Matriz C em ordem decrescente.

#include <stdio.h>

int main() {
    int A[20], B[30], C[50];
    int temp;

    for (int i = 0; i < 20; i++) {
        printf("Digite o %d número para A: ", i+1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 30; i++) {
        printf("Digite o %d número para B: ", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 20; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 30; i++) {
        C[i + 20] = B[i];
    }

    for (int i = 0; i < 49; i++) {
        for (int j = i + 1; j < 50; j++) {
            if (C[i] < C[j]) {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    printf("Matriz C (junção de A e B) em ordem decrescente:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
