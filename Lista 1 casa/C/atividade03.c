// 3) Calcule quantos azulejos são necessários para azulejar uma parede. É necessário
// conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (AA) e sua
// largura (LA). Leia os dados através do teclado.

float AP, LP, AA, LA,area_parede,area_azulejo,azulejos_necessarios;

#include <stdio.h>

int main()
             {
           
    printf("Qual a altura da parede?:");
    scanf("%f",&AP);

    printf("Qual a largura da parede:?");
    scanf("%f",&LP);

    printf("Qual a altura do azulejo:?");
    scanf("%f",&AA) ;

    printf("Qual a largura do azulejo:?");
    scanf("%f",&LA);

    area_parede = AP*LP;
    area_azulejo = AA*LA;

    azulejos_necessarios = area_parede/area_azulejo;

    printf("Você precisara de %.0f azulejos", area_azulejo);


    return 0;


     }