# 10) Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b".
# Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
# das variáveis "a" e "b".

a=float(input("Digite um valor"))
b=float(input("Digite um valor"))

c = a
a = b
b = c

print("Seus valores trocados estão aqui", a,b)


