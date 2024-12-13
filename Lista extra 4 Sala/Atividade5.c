// 5) Ler duas matrizes A e B com 20 e 30 elementos. Criar a matriz C com a junção das duas. Exibir a matriz C.
#include <stdio.h>

int main() {
    int A[20], B[30], C[50];
    
    for (int i = 0; i < 20; i++) {
        printf("Digite o %d numero para a matriz A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 30; i++) {
        printf("Digite o %d numero para a matriz B: ", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 20; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < 30; i++) {
        C[i + 20] = B[i];
    }

    printf("Matriz C (junção de A e B):\n");
    for (int i = 0; i < 50; i++) {
        printf("C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}
