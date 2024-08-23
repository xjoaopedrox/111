// 2) Digitado um número inteiro entre 0 e 100, informar o quanto ele está distante de um
// determinado número chave, carregado no próprio programa. Ex.: Número chave=20,
// número digitado=15, resposta=5. Número chave=17, número digitado=20, resposta=3
// (Obs.: a resposta deverá ser sempre um número positivo).

#include<stdio.h>

int main()
    {

     int n;
    int chave = 88;

    printf("Digite um numero entre 0 e 100: ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Numero nao pode ser lido\n");
    } else {
        if (chave == n) {
            printf("Voce achou o numero\n");
        } else {
            if (n < chave) {
                printf("A distancia do numero chave é %d\n", chave - n);
            } else {
                printf("A distancia do numero chave é %d\n", n - chave);
            }
        }
    }  

        return 0;


    }