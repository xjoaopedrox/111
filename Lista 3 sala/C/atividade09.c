// 9)-  Crie  um  programa  que  apresente  o  valor  de  uma  potência  de  uma  base 
// qualquer elevada a um expoente qualquer, ou seja, de N elevado a M. 

#include <stdio.h>
#include <math.h>

int main() {
    int N, M;
    double P;

    printf("Digite uma base qualquer: ");
    scanf("%d", &N);
    printf("Digite um expoente qualquer: ");
    scanf("%d", &M);

    P = pow(N, M);
    
    printf("O resultado de %d elevado a %d é: %.2f\n", N, M, P);

    return 0;
}
