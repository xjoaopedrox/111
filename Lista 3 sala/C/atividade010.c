// 10)-  Crie  um  programa  que  exiba  no  final  o  somatório  dos  valores  pares 
// existentes na faixa de 1 até 500.

#include <stdio.h>

int main() {
    int contador;
    int resultado = 0;

    for (contador = 1; contador <= 500; contador++) {
        if (contador % 2 == 0) {
            resultado += contador;
        }
    }
    
    printf("Somatório dos valores pares de 1 até 500: %d\n", resultado);

    return 0;
}
