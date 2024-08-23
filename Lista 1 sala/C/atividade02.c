// 2)- Ler uma temperatura em graus Fahrenheit e exibi-la convertida em graus
// Centígrados, com a fórmula: C <- (((F-32) * 5) / 9), onde F é a temperatura em
// Fahrenheit e C em Centígrados.


#include <stdio.h>

int main() {
    float temperatura_em_Fahrenheit, temperatura_em_Graus;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_em_Fahrenheit);

    temperatura_em_Graus = (temperatura_em_Fahrenheit - 32) * 5 / 9;

    printf("A temperatura em graus Celsius fica %.2f\n", temperatura_em_Graus);

    return 0;
}
