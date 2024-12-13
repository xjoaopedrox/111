// 3) Ler 15 elementos em uma matriz A tipo vetor.
// Criar uma matriz B de mesma dimensão, sendo que cada elemento da matriz B seja o fatorial do elemento correspondente da matriz A. Exibir os elementos da matriz B ordenados de forma crescente.

#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int A[15], B[15];
    int temp;

    for (int i = 0; i < 15; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &A[i]);
        B[i] = fatorial(A[i]);
    }

    for (int i = 0; i < 14; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("Matriz B (fatorial dos números) em ordem crescente:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
