# 10)- Faça um algoritmo que receba como entrada o mês (de 1 a 12) e retorne o nome
# do respectivo mês. (Utilizar caso/seja)

cursos = ['Engenharia', 'Edificações', 'Sistemas Elétricos', 'Turismo', 'Análise de sistemas']

numero_curso = int(input("Qual curso voce gostaria de acessar? (1 a 5): "))

if 1<= numero_curso <=5:
    print(f"O curso selecionado é {cursos[numero_curso - 1]}")
else:
    print("Curso não encontrado")