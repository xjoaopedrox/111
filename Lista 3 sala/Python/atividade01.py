# 1)- Exibir todos os valores numéricos inteiros ímpares situados na faixa de 0 a
# 20. Para verificar se o número é ímpar, efetuar dentro da malha a verificação
# lógica dessa condição com a instrução SE, perguntando se o número é ímpar,
# sendo, exiba-o, não sendo, passe para o próximo passo

c=int

for c in range (0,20):
    if c % 2 != 0:
        print(c)
    