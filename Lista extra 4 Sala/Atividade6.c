// 6) Ler 8 elementos de uma matriz A.
//Criar a matriz B com o quadrado dos elementos de A. Exibir a matriz B.

#include <stdio.h>

int main() {
    int A[8], B[8];
    
    for (int i = 0; i < 8; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i];
    }

    printf("Matriz B (quadrado dos elementos de A):\n");
    for (int i = 0; i < 8; i++) {
        printf("B[%d] = %d\n", i+1, B[i]);
    }

    return 0;
}
