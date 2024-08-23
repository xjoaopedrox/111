# 8)- Crie um programa que exiba a série de Fibonacci até o décimo quinto
# termo. A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21,
# 34....etc. Essa série se caracteriza pela soma de um termo posterior com seu
# anterior subseqüente

termo_posterior=0
termo_anterior=1

print(termo_anterior)


for serie in range(2,16):
   fibo = termo_anterior+termo_posterior
   print(fibo)    

   termo_posterior = termo_anterior
   termo_anterior = fibo

   
 
      