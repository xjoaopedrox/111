// 2) Ler 8 elementos em uma matriz A tipo vetor. Criar uma matriz B de mesma dimensão com os elementos da matriz multiplicados por 5. Exibir a matriz B na ordem crescente. Criar uma rotina para pesquisar os elementos armazenados na matriz B.

#include <stdio.h>

int main() {
    int A[8], B[8], pesquisa, encontrado = 0;
    int temp;

    for (int i = 0; i < 8; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%d", &A[i]);
        B[i] = A[i] * 5;
    }

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (B[i] > B[j]) {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    printf("Matriz B em ordem crescente:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Qual número você quer buscar na Matriz B? ");
    scanf("%d", &pesquisa);
    for (int i = 0; i < 8; i++) {
        if (B[i] == pesquisa) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Achei esse número na Matriz B!\n");
    } else {
        printf("Não encontrei esse número na Matriz B.\n");
    }

    return 0;
}
