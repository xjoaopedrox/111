// 1) Ler 12 elementos de uma matriz tipo vetor, colocá-los em ordem decrescente e apresentar os elementos ordenados.

#include <stdio.h>

int main() {
    int A[12];
    int temp;

    for (int i = 0; i < 12; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("Números em ordem decrescente:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
