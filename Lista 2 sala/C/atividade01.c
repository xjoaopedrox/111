#include <stdio.h>

int main() {
    float nota1, nota2, nota3, resultado;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3;

    if (resultado >= 6.0) {
        printf("Aluno aprovado. Media: %.2f\n", resultado);
    } else {
        printf("Aluno não aprovado. Media: %.2f\n", resultado);
    }

    return 0;
}
