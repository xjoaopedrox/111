#include <stdio.h>

int main() {
    float salario_bruto, horas, salario_liquido, desconto_ir, desconto_encargos, horas_excedentes, adicional_horas_excedentes, total_geral_salario;

    total_geral_salario = 0;

    while (1) {
        printf("Qual o salário bruto do funcionário? Você pode colocar quantos salários quiser (Digite 0 para sair): ");
        scanf("%f", &salario_bruto);

        if (salario_bruto == 0) {
            break;
        }

        printf("Quantas horas trabalhadas na firma? ");
        scanf("%f", &horas);

        if (salario_bruto < 800.00) {
            salario_liquido = salario_bruto;
        } else if (salario_bruto <= 1600.00) {
            desconto_ir = salario_bruto * 0.08;
            desconto_encargos = salario_bruto * 0.05;
            salario_liquido = salario_bruto - desconto_ir - desconto_encargos;
        } else if (salario_bruto > 1600.00) {
            desconto_ir = salario_bruto * 0.15;
            desconto_encargos = salario_bruto * 0.07;
            salario_liquido = salario_bruto - desconto_ir - desconto_encargos;
        }

        if (horas > 160) {
            horas_excedentes = horas - 160;
            adicional_horas_excedentes = salario_bruto * 0.5 * (horas_excedentes / 160);
            salario_liquido += adicional_horas_excedentes;
        }

        total_geral_salario += salario_liquido;

        if (salario_bruto < 800.00 && horas > 160) {
            float adicionais = salario_liquido + salario_bruto * 0.5;
            printf("Salário líquido: R$ %.2f, com adicionais: R$ %.2f\n", salario_liquido, adicionais);
        } else if (salario_bruto < 800.00) {
            printf("Salário líquido: R$ %.2f\n", salario_liquido);
        } else if (salario_bruto <= 1600.00 && horas > 160) {
            float adicionais = salario_liquido + salario_bruto * 0.5;
            printf("Salário líquido: R$ %.2f, com adicionais: R$ %.2f\n", salario_liquido, adicionais);
        } else if (salario_bruto <= 1600.00) {
            printf("Salário líquido: R$ %.2f\n", salario_liquido);
        } else if (salario_bruto > 1600.00 && horas > 160) {
            float adicionais = salario_liquido + salario_bruto * 0.5;
            printf("Salário líquido: R$ %.2f, com adicionais: R$ %.2f\n", salario_liquido, adicionais);
        } else {
            printf("Salário líquido: R$ %.2f\n", salario_liquido);
        }
    }

    printf("Total geral dos salários líquidos: R$ %.2f\n", total_geral_salario);

    return 0;
}
