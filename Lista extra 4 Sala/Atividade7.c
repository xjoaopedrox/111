// 7) Ler 10 elementos de uma matriz A e criar a matriz B com os elementos de A invertidos.
#include <stdio.h>

int main() {
    int A[10], B[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        B[i] = A[9 - i];
    }

    printf("Matriz B (invertida):\n");
    for (int i = 0; i < 10; i++) {
        printf("B[%d] = %d\n", i+1, B[i]);
    }

    return 0;
}
