#include <stdio.h>

int main () {
    const char *cursos[] = {

         "Engenharia", "Edificações","Sistemas Elétricos", 
         "Turismo", "Análise de sistemas"

    };

    int numero_curso;

    printf("Qual curso voce gostaria de acessar? (1 a 5): ");
    scanf("%d",&numero_curso);

    if (numero_curso >= 1 && numero_curso <=12) {
        printf("O curso selecionado e: %s\n",cursos[numero_curso - 1]);
    } else{
        printf("Numero invalido! Por favor, digite um numero entre 1 a 5.\n");
    }

    return 0;


}