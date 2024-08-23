// 7) Exibir as potências de 3 variando de 0 a 15. Deve ser considerado que 
// qualquer número elevado a zero é 1 e elevado a 1 é ele mesmo.

#include <stdio.h>
#include <math.h> // Para usar a função pow()

int main() {
    int contador;
    int base = 3;

    for (contador = 0; contador <= 15; contador++) {
        int resultado = pow(base, contador); // Calcula 3 elevado a contador
        printf("3 elevado a %d = %d\n", contador, resultado);
    }

    return 0;
}
