// 2) Ler uma matriz A com 6 elementos.
// Criar uma matriz B com o fatorial dos elementos de A. Exibir a matriz B.

#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int A[6], B[6];
    
    for (int i = 0; i < 6; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &A[i]);
        B[i] = fatorial(A[i]);
    }

    printf("Matriz B (fatorial dos números de A):\n");
    for (int i = 0; i < 6; i++) {
        printf("B[%d] = %d\n", i+1, B[i]);
    }

    return 0;
}
