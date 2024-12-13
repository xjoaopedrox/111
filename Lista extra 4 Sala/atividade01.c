// 1) Ler 5 números inteiros em uma matriz A tipo vetor.
// Criar uma matriz B de mesma dimensão com os elementos da matriz A multiplicados por 3. Exibir a matriz B.
#include <stdio.h>

int main() {
    int A[5], B[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &A[i]);
        B[i] = A[i] * 3;
    }

    printf("Matriz B (multiplicada por 3):\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d] = %d\n", i+1, B[i]);
    }

    return 0;
}
