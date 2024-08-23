// 1)- Calcular a quantidade de litros de combustível gasta numa viagem, utilizandose um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deverá
// fornecer o tempo gasto na viagem e a velocidade média durante a mesma. Assim,
// será possível calcular a distância percorrida com a fórmula: DISTÂNCIA <-
// TEMPO * VELOCIDADE. Tendo o valor da distância, calcule a quantidade de litros
// de combustível usada na viagem com a fórmula: LITROS_USADOS <-
// DISTÂNCIA / 12. O programa deverá exibir os valores da velocidade média, tempo
// gasto na viagem, a distância percorrida e a quantidade de litros usada na viagem.



#include <stdio.h>

int main() {
    float tempo, velocidade_media, consumo_por_km, distancia, litros_usados;

    printf("Quanto tempo durou a viagem (em horas)? ");
    scanf("%f", &tempo);

    printf("Qual foi a velocidade média (em km/h)? ");
    scanf("%f", &velocidade_media);

    consumo_por_km = 12;

    distancia = velocidade_media * tempo;

    litros_usados = distancia / consumo_por_km;

    printf("Sua velocidade média foi %.2f km/h e seu tempo foi %.2f horas.\n", velocidade_media, tempo);
    printf("A distância total percorrida foi de %.2f km.\n", distancia);
    printf("Você gastou %.2f litros de gasolina.\n", litros_usados);

    return 0;
}
