// # 1)-A empresa XYZ decidiu conceder um aumento de salários a seus funcionários
// # de acordo com a tabela abaixo:
// # SALÁRIO ATUAL (R$) ÍNDICE DE AUMENTO 0,00 – 400,00 15% 401,00 –
// # 700,00 12% 701,00 – 1000,00 10% 1001,00 – 1800,00 7% 1801,00 – 2500,00
// # 4% ACIMA DE 2500,00 SEM AUMENTO
// # Escrever um programa que lê, para um funcionário, o seu nome e o seu salário
// # atual. Após receber estes dados, o algoritmo calcula o novo salário e escreve na
// # tela as seguintes informações: ➢ nome do funcionário ➢ % de aumento ➢
// # salário atual ➢ novo salário

#include<stdio.h>
int main() 
{ char nome[50];
  float salario,novo_salario;

 printf("Qual o seu nome?\n");
 scanf("%s",&nome);

 printf("Qual o seu salario?\n");
 scanf("%f",&salario);

 novo_salario=salario;

 if (salario >= 0 && salario <=400.00)
 {
    novo_salario+=(salario*12)/100;
    printf("Ola!\n%s Dado a consulta do nosso sistema vamos aumentar seu salario que vale R$%.2f para R$%.2f um aumento de 15%% ",nome,salario,novo_salario);
 }
 else if (salario >= 401.00 && salario <= 700.00)
 {
     novo_salario+=(salario*15)/100;
    printf("Ola!\n%s Dado a consulta do nosso sistema vamos aumentar seu salario que vale R$%.2f para R$%.2f um aumento de 12%% ",nome,salario,novo_salario);
 }
else if (salario >= 701.00 && salario <=1000.00)
{
    novo_salario+=(salario*10)/100;
    printf("Ola!\n%s Dado a consulta do nosso sistema vamos aumentar seu salario que vale R$%.2f para R$%.2f um aumento de 10%% ",nome,salario,novo_salario);
}
else if (salario >= 1001.00 && salario <= 1800.00)
{
    novo_salario+=(salario*7)/100;
    printf("Ola!\n%s Dado a consulta do nosso sistema vamos aumentar seu salario que vale R$%.2f para R$%.2f um aumento de 7%% ",nome,salario,novo_salario);
}
else if (salario >= 1801.00 && salario <= 2500.00)
{
    novo_salario+=(salario*4)/100;
    printf("Ola\n%s Dado a consulta do nosso sistema vamos aumentar seu salario que vale R$%.2f para R$%.2f um aumento de 4%% ",nome,salario,novo_salario);

}
else
printf("Ola!\n %s Dado a consulta do nosso sistema Seu salario nao tem bonus, portanto continuará o mesmo R$%.2f",nome,salario);



return 0;

}