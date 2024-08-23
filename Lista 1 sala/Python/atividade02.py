# 2)- Ler uma temperatura em graus Fahrenheit e exibi-la convertida em graus
# Centígrados, com a fórmula: C <- (((F-32) * 5) / 9), onde F é a temperatura em
# Fahrenheit e C em Centígrados.


temperatura_em_Fahrenheit = float(input("Diga uma temperatura em fahrenheit "))

temperatura_em_Graus = (temperatura_em_Fahrenheit -32) * 5 / 9

print("A temperatura em graus fica {:.1f}".format (temperatura_em_Graus))
