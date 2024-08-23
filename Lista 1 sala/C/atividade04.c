// 7)- Uma loja petshop precisa de um programa para calcular os custos de criação
// de coelhos. O custo é calculado com a fórmula: CUSTO <- (NR_COELHOS * 0.70)
// /18 + 10. O programa deve ler o valor para a variável NR_COELHOS e exibir o
// valor da variável CUSTO

#include <stdio.h>

int main() {
    float A, B;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

 
    A = B;
    B = A;

    printf("Este e o valor atual de A: %.2f\n", A);
    printf("Este e o valor atual de B: %.2f\n", B);

    return 0;
}
