# 2) Digitado um número inteiro entre 0 e 100, informar o quanto ele está distante de um
# determinado número chave, carregado no próprio programa. Ex.: Número chave=20,
# número digitado=15, resposta=5. Número chave=17, número digitado=20, resposta=3
# (Obs.: a resposta deverá ser sempre um número positivo).

n = int(input("Digite um número entre 0 e 100: "))
chave = 88

if n < 0 or n > 100:
    print("Número não pode ser lido")
else:
    if chave == n:
        print("Você achou o número")
    else:
        if n < chave:
            print(f"A distância do número chave é {chave - n}")
        else:
            print(f"A distância do número chave é {n - chave}")
