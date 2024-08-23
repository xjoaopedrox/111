# 7)- Uma loja petshop precisa de um programa para calcular os custos de criação
# de coelhos. O custo é calculado com a fórmula: CUSTO <- (NR_COELHOS * 0.70)
# /18 + 10. O programa deve ler o valor para a variável NR_COELHOS e exibir o
# valor da variável CUSTO

NR_COELHOS=int(input("Quantos coelhos sua loja tem?:"))

custo= (NR_COELHOS*0.70)/18 + 10

print("O custo da criação do coelhos é: R${:.2f}".format (custo))



