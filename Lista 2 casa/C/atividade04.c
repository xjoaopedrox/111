#include<stdio.h>

int main()
    {
        float n1,n2,n3;
        printf("Digite um numero A: ");
        scanf("%f", &n1);

        printf("Digite um numero B: ");
        scanf("%f", &n2);

        printf("Digite um numero C: ");
        scanf("%f", &n3);

        // maior numero

        if (n1 > n2 && n1 > n3)
        {
            printf("Seu numero vale A %1.f\n", n1);
        }
          else if (n2 > n1 && n2 > n3)
        {
            printf("O maior numero e B %.1f\n", n2);
        }
        else
        {
            printf("O maior numero e C %.1f\n", n3);
        }

         // menor numero

        if (n1 < n2 && n1 < n3)
        {
            printf("O menor numero e A %1.f\n", n1);
        }
          else if (n2 < n1 && n2 < n3)
        {
            printf("O menor numero e B %.1f\n", n2);
        }
        else
        {
            printf("O menor numero e C %.1f\n", n3);
        }

         // numero do meio

        if (n1 > n2 && n1 < n3)
        {
            printf("Seu numero do meio vale A %1.f\n", n1);
        }
          else if (n2 > n1 && n2 < n3)
        {
            printf("Seu numero do meio vale B %.1f\n", n2);
        }
        else
        {
            printf("Seu numero do meio vale C %.1f\n", n3);
        }











        return 0;


    }