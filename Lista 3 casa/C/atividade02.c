// 2)  Elaborar  um  programa  que  escreva  em  tela  todos  os  números  pares  existentes 
// entre 20 e 1, utilizando o comando while( ).

#include <stdio.h>

int main() {
    int n = 20;
    while (n >= 1) {
        if (n % 2 == 0) {
            printf("%d\n", n);
        }
        n--;
    }
    printf("fim\n");
    return 0;
}
