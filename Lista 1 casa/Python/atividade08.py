# 8) Faça um programa para calcular a média final de um aluno, supondo-se que há
# quatro notas bimestrais durante o ano e que esta é calculada através de uma média
# aritmética simples (todos os bimestres têm o mesmo peso).


primeiroB=float(input("Qual a sua nota no primeiro bimestre?"))
segundoB=float(input("Qual a sua nota no segundo bimestre?"))
terceiroB=float(input("Qual a sua nota no terceiro bimestre?"))
quartoB=float(input("Qual a sua nota no quarto bimestre?"))

media=(primeiroB+segundoB+terceiroB+quartoB)/4


if primeiroB >10 or segundoB >10 or terceiroB >10 or quartoB > 10:
    print("Nota invalida")

else:
    print("sua media foi", media)





