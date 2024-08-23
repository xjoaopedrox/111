# 2)- Exibir o total da soma obtido dos cem primeiros números inteiros
# (1+2+3+4+5+.....+97+98+99+100).

soma=int(0)

for contador in range(1,100+1):
    soma+=contador
    print(soma)
