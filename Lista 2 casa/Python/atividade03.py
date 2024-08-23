# 3) Uma Universidade tem problemas com arredondamento das médias dos alunos,
# pois cada professor estipula um critério de arredondamento. Devemos elaborar um
# programa, em Linguagem C++, para a secretaria da Universidade, resolvendo esse
# problema. O programa deve solicitar uma nota e fazer o devido arredondamento.
# Regras:
# Notas que ultrapassem 0,5 de resto serão arredondas para CIMA.
# Ex: 4,6 –>5,0
# Notas que abaixo ou igual a 0,5 de resto serão arredondas para BAIXO.
# Ex: 4,5 –> 4,0

nota=float(input("Digite sua nota"))
resultado=round(nota)

print(resultado)