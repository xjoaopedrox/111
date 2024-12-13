// 4) Ler 12 elementos em uma matriz A tipo vetor.
// Após sua leitura, colocar os seus elementos em ordem crescente. Depois ler uma matriz B também com 12 elementos.
// Colocar os elementos de B em ordem crescente. Criar uma matriz C, onde cada elemento de C é a soma do elemento correspondente de A com B.
// Colocar em ordem crescente a matriz C e apresentar os seus valores.

#include <stdio.h>

int main() {
    int A[12], B[12], C[12];
    int temp;

    for (int i = 0; i < 12; i++) {
        printf("Digite o %d número para A: ", i+1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 12; i++) {
        printf("Digite o %d número para B: ", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            if (B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    for (int i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (C[i] > C[j]) {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    printf("Matriz C (soma de A e B) em ordem crescente:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
