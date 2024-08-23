// 1) Elaborar um programa em que informe se o número digitado pelo usuário é par ou
// impar

#include<stdio.h>

int main()
    {

 int n;
        printf("Digite um numero");
        scanf("%d",&n);

        if (n % 2 == 0) {
        printf("Seu numero e par\n");
        } else {
            printf("Seu numero e impar\n");
        }
            

        return 0;


    }