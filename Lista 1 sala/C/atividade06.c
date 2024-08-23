// 


#include <stdio.h>

int main() {
    float valor,tempo,taxa,prestacao;

    printf("Quanto voce deve?:");
    scanf("%f", &valor);

    printf("Qual e o tempo em dias que voce atrasou:");
    scanf("%f", &tempo);

    printf("Qual o valor da taxa:");
    scanf("%f", &taxa);


    prestacao = valor + (valor*(taxa/100))*tempo;

    printf("Voce tem que pagar %.2f\n", prestacao);
    return 0;


}

