nota1 = float(input("Qual a sua nota 1? "))
nota2 = float(input("Qual a sua nota 2? "))
nota3 = float(input("Qual a sua nota 3? "))

resultado = (nota1 + nota2 + nota3) / 3

if resultado >= 6.0:
    print(f"Aluno aprovado. Média: {resultado:.2f}")
else:
    print(f"Aluno não aprovado. Média: {resultado:.2f}")