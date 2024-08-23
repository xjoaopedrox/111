total_geral_salario = 0

while True:
    salario_bruto = float(input("Qual o salário bruto do funcionário? Voce pode colocar quantos salários quiser (Digite 0 para sair): "))
    
    if salario_bruto == 0:
        break
    
    horas = float(input("Quantas horas trabalhadas na firma? "))

    if salario_bruto < 800.00:
        salario_liquido = salario_bruto 
    elif 800.00 <= salario_bruto <= 1600.00:
        desconto_ir = salario_bruto * 0.08
        desconto_encargos = salario_bruto * 0.05
        salario_liquido = salario_bruto - desconto_ir - desconto_encargos
    elif salario_bruto > 1600.00:
        desconto_ir = salario_bruto * 0.15
        desconto_encargos = salario_bruto * 0.07
        salario_liquido = salario_bruto - desconto_ir - desconto_encargos
    
    if horas > 160:
        horas_excedentes = horas - 160
        adicional_horas_excedentes = salario_bruto * 0.5 * (horas_excedentes / 160)
        salario_liquido += adicional_horas_excedentes

    total_geral_salario += salario_liquido

    if salario_bruto < 800.00 and horas > 160:
        print(f"Salário líquido: R$ {salario_liquido:.2f}, com adicionais: R$ {salario_liquido + salario_bruto * 0.5:.2f}")
    elif salario_bruto < 800.00:
        print(f"Salário líquido: R$ {salario_liquido:.2f}")
    elif salario_bruto <= 1600.00 and horas > 160:
        print(f"Salário líquido: R$ {salario_liquido:.2f}, com adicionais: R$ {salario_liquido + salario_bruto * 0.5:.2f}")
    elif salario_bruto <= 1600.00:
        print(f"Salário líquido: R$ {salario_liquido:.2f}")
    elif salario_bruto > 1600.00 and horas > 160:
        print(f"Salário líquido: R$ {salario_liquido:.2f}, com adicionais: R$ {salario_liquido + salario_bruto * 0.5:.2f}")

print(f"Total geral dos salários líquidos: R$ {total_geral_salario:.2f}")
