# 3)- Calcular e exibir o valor do volume de uma lata de óleo, usando a fórmula:
# VOLUME <- 3.14159 * R * R * ALTURA.



volume = float(input("Qual o volume da lata:",))
raio = float(input("Qual o valor do raio da lata em cm?"))
altura = float(input("Qual o valor da altura?"))

if raio <= 0:
    print("O valor de raio não pode ser negativo")


volume_da_lata =  raio * raio * altura

print("seu volume da lata é 30{:.1f}".format (volume_da_lata))
