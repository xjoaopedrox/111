// 5)- Ler um número inteiro e exibir o resultado do quadrado dele mesmo.


#include <stdio.h>

int main() {
    int X;

    printf("Diga um numero inteiro: ");
    scanf("%d", &X);

    X = X*X;

    printf("Aqui teu numero ao quadrado =) %d\n", X);
    
    return 0;

}