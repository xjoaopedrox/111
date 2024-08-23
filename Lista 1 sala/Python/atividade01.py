# 1)- Calcular a quantidade de litros de combustível gasta numa viagem, utilizandose um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deverá
# fornecer o tempo gasto na viagem e a velocidade média durante a mesma. Assim,
# será possível calcular a distância percorrida com a fórmula: DISTÂNCIA <-
# TEMPO * VELOCIDADE. Tendo o valor da distância, calcule a quantidade de litros
# de combustível usada na viagem com a fórmula: LITROS_USADOS <-
# DISTÂNCIA / 12. O programa deverá exibir os valores da velocidade média, tempo
# gasto na viagem, a distância percorrida e a quantidade de litros usada na viagem.



tempo = float(input("Quanto tempo dá a viagem (em horas)? "))
velocidade_media = float(input("Qual a velocidade média (em km/h)? "))

consumo_por_km = 12
distancia = velocidade_media*tempo

print ("sua velocidade foi?", velocidade_media, "km/" "e seu tempo é", tempo,"o corre todo deu isso de distancia", distancia )
litros_usados = distancia / consumo_por_km

print("sua velocidade media?",velocidade_media)
print("tempo gasto na viagem:", tempo)
print("distancia foi de: {:.2f}".format (distancia))
print("voce gastou isto em litros: {:.2f}".format (litros_usados))

                    