// 10) Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b".
// Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
// das variáveis "a" e "b".

#include <stdio.h>
int main()  {

    float a,b,c;

    printf("Qual o primeiro valor?:");
    scanf("%f",&a);

    printf("Qual o segundo valor?");
    scanf("%f",&b);

    c = a;
    a = b;
    b = c;

    printf("Aqui estao os valores trocados %.2f \n %.2f",a,b);

    return 0;
    

}