// 7)  Elaborar um programa que escreva em tela os números de 1 a 20, utilizando o 
// comando do-while( ).

#include <stdio.h>

int main() {
    int n = 1;

    do {
        printf("%i", n);
        n = n + 1;
    } while (n <= 20);

    return 0;
}
