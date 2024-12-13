// 6) Ler 30 elementos em uma matriz A tipo vetor.
// Criar uma matriz B de mesma dimensão, observando a seguinte lei de formação: todo elemento de B deverá ser o cubo do elemento de A correspondente.
// Montar uma rotina de pesquisa, para pesquisar os elementos armazenados na matriz B.

#include <stdio.h>

int main() {
    int A[30], B[30], pesquisa, encontrado = 0;

    for (int i = 0; i < 30; i++) {
        printf("Digite o %d número para A: ", i+1);
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i] * A[i]; // cubo do elemento de A
    }

    printf("Qual número você quer buscar na Matriz B? ");
    scanf("%d", &pesquisa);

    for (int i = 0; i < 30; i++) {
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
