# 9) O critério de avaliação semestral de determinada escola segue a regra:
# P1 – primeira avaliação do semestre.
# P2 – segunda avaliação do semestre.
# Ativ – nota atribuída pelas atividades realizadas no semestre.
# Média = P1 x 4 + P2 x 4 + Ativ x 2
# ------------------------------------
#  10
# Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
# calcule e mostre a média, seguindo o cálculo acima.


P1=float(input("Qual foi a nota da sua primeira avaliação do bimestre?:"))
P2=float(input("Qual a foi a nota da sua segunda avaliação do bimestre?:"))
ativ=float(input("Qual a foi a nota das suas avaliações do semestre?:"))

Média = (P1 * 4 + P2 * 4 + ativ * 2)/10

print(f"Sua média foi igual a {Média:.2f}")
