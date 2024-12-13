// 4) Ler duas matrizes A e B com 5 elementos.
// Criar a matriz C com a junção das duas. Exibir a matriz C.
#include <stdio.h>

int main() {
    int A[5], B[5], C[10];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero para a matriz A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero para a matriz B: ", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[i] = A[i];
        C[i + 5] = B[i];
    }

    printf("Matriz C (junção de A e B):\n");
    for (int i = 0; i < 10; i++) {
        printf("C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}
