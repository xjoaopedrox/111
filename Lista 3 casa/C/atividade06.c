// 6)  Elaborar  um  programa  que  escreva  em  tela  os  números  de  20  a  1,  informando 
// quando eles são pares e quando são ímpares, utilizando o comando for().

#include <stdio.h>

int main() {
    for (int contador = 20; contador >= 1; contador--) {
        if (contador % 2 == 0) {
            printf("%d par\n", contador);
        } else {
            printf("%d impar\n", contador);
        }
    }
    return 0;
}
