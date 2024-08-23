#include <stdio.h>

int main() {
    const char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    
    int numero_mes;

    printf("Diga qual o numero do mes (1 a 12): ");
    scanf("%d", &numero_mes);

    if (numero_mes >= 1 && numero_mes <= 12) {
        printf("O mes e: %s\n", meses[numero_mes - 1]);
    } else {
        printf("Numero invalido! Por favor, digite um numero entre 1 e 12.\n");
    }

    return 0;
}
