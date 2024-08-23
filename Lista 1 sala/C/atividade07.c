// 7)- Uma loja petshop precisa de um programa para calcular os custos de criação
// de coelhos. O custo é calculado com a fórmula: CUSTO <- (NR_COELHOS * 0.70)
// /18 + 10. O programa deve ler o valor para a variável NR_COELHOS e exibir o
// valor da variável CUSTO


#include <stdio.h>

int main() {
    int NR_COELHOS;
    float custo;

    printf("Qual o numero de coelhos?: ");
    scanf("%d", &NR_COELHOS);

    custo= (NR_COELHOS*0.70)/18 + 10;

    printf("O custo da criacao do coelhos %.2f\n", custo);

    return 0;

}
