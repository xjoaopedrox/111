#include<stdio.h>

int main()
    {
        float nota;
        int resultado;
        float resto;

        printf("Digite sua nota: ");
        scanf("%f", &nota);
        
        resto = nota - (int)nota;

        if (resto > 0.5)
        {
            resultado = (int)nota + 1;        
        } else {
            resultado = (int)nota;
        }
         printf("Nota arredondada: %d.0\n", resultado);
     

        return 0;


    }