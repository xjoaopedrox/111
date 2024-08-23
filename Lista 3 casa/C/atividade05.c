// 5)  Elaborar  um  programa  que  escreva  em  tela  todos  os  números  impares  existentes 
// entre 1 e 20, utilizando o comando for( ).

#include <stdio.h>

int main() {
    for (int contador = 1; contador <= 20; contador++) {
        if (contador % 2 != 0) {
            printf("%d", contador);
        }
    }
    return 0;
}
