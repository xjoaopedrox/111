//  9) O critério de avaliação semestral de determinada escola segue a regra:
//  P1 – primeira avaliação do semestre.
//  P2 – segunda avaliação do semestre.
//  Ativ – nota atribuída pelas atividades realizadas no semestre.
//  Média = P1 x 4 + P2 x 4 + Ativ x 2
//  ------------------------------------
//   10
//  Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
//  calcule e mostre a média, seguindo o cálculo acima.

#include <stdio.h>
int main()
    {

    float ativ, P1, P2, media;

     printf("Qual foi a nota da sua primeira avaliacao do bimestre?:");
     scanf("%f", &P1);

     printf("Qual foi a nota da sua segunda avaliacao?:");
     scanf("%f", &P2);

     printf("Qual foi a nota da das atividades?:");
     scanf("%f", &ativ);

     
    media = (P1 * 4 + P2 * 4 + ativ * 2)/10;

    printf("Sua media foi igual a %.2f",media);


    return 0;


}