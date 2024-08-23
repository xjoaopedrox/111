// 3)- Calcular e exibir o valor do volume de uma lata de óleo, usando a fórmula:
// VOLUME <- 3.14159 * R * R * ALTURA.


#include <stdio.h>

int main() {
    float volume, raio, altura, volume_da_lata;

    printf("Digite o volume da lata em litros: ");
    scanf("%f", &volume);
    
    printf("Digite o raio da lata: ");
    scanf("%f", &raio);
    
    printf("Qual a altura da lata? ");
    scanf("%f", &altura);
    
    if (raio <= 0) {
        printf("O valor de raio nao pode ser negativo ou zero\n");
        return 1; 
    }
    
    volume_da_lata = 3.14159 * raio * raio * altura;
    
   
    printf("Este e o volume da lata: %.2f metros cubicos\n", volume_da_lata);
    
    return 0;
}
