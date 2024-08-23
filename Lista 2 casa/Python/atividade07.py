# 7)- Entrar um código de acesso a um curso. Se o código for 1, 2,3,4 e 5 exibir na tela
# Engenharia, Edificações, Sistemas Elétricos, Turismo e Análise de Sistemas
# respectivamente; caso contrário exibir que o código é inválido.

cursos = ['Engenharia', 'Edificações', 'Sistemas Elétricos', 'Turismo', 'Análise de sistemas']

numero_curso = int(input("Qual curso voce gostaria de acessar? (1 a 5): "))

if numero_curso >= 1 and numero_curso <= 5:
    print(f"O curso selecionado é {cursos[numero_curso - 1]}")
else:
    print("Curso não encontrado")