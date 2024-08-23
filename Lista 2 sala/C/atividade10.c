#include <stdio.h>

int main() {
    int numero_curso;
    const char *cursos[] = {
        "Engenharia",
        "Edificações",
        "Sistemas Elétricos",
        "Turismo",
        "Análise de sistemas"
    };
    int total_cursos = sizeof(cursos) / sizeof(cursos[0]);

    printf("Qual curso voce gostaria de acessar? (1 a %d): ", total_cursos);
    scanf("%d", &numero_curso);

    if (numero_curso >= 1 && numero_curso <= total_cursos) {
        printf("O curso selecionado é %s\n", cursos[numero_curso - 1]);
    } else {
        printf("Curso não encontrado\n");
    }

    return 0;
}
