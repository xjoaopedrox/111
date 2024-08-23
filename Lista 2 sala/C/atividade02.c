#include <stdio.h>

int main() {
    float nota1, nota2, nota3, resultado;

    printf("Qual a sua nota 1? ");
    scanf("%f", &nota1);

    printf("Qual a sua nota 2? ");
    scanf("%f", &nota2);

    printf("Qual a sua nota 3? ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3;

    if (resultado >= 6.0) {
        printf("Aluno aprovado. Media: %.2f\n", resultado);
    } else {
        printf("Aluno nao aprovado. Media: %.2f\n", resultado);
    }

    return 0;
}
