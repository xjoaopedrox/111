// 3) Ler duas matrizes A e B com 5 elementos.
// Criar a matriz C com a subtração dos elementos correspondentes de A e B. Exibir a matriz C.
#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero para a matriz A: ", i+1);
        scanf("%d", &A[i]);
        printf("Digite o %d numero para a matriz B: ", i+1);
        scanf("%d", &B[i]);
        C[i] = A[i] - B[i];
    }

    printf("Matriz C (subtração de A e B):\n");
    for (int i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i+1, C[i]);
    }

    return 0;
}
