# 4) Faça um programa que leia 3 números e exiba:
# a) O maior número;
# b) O menor número; 
# c) O número do meio
 
n2=float(input("Digite o numero B: "))
n1=float(input("Digite o numero A: "))
n3=float(input("Digite o numero C: "))

# maior n

if n1 > n2 and n1 > n3:
    print(f"Seu numero maior vale A: {n1}")
elif n2 > n1 and n2 > n3:
    print(f"Seu numero maior vale B:  {n2}")
else:
    print(f"Seu numero maior vale C: {n3}")

# menor n

if n1 < n2 and n1 < n3:
    print(f"Seu numero menor vale A: {n1}")
elif n2 < n1 and n2 < n3:
    print(f"Seu numero menor vale B:  {n2}")
else:
    print(f"Seu numero menor vale C: {n3}")

#numero do meio

if n1 > n2 and n1 < n3:
    print(f"Seu numero do meio vale A: {n1}")
elif n2 > n1 and n2 < n3:
    print(f"Seu numero do meio vale B: {n2}")
else:
    print(f"Seu numero do meio vale C: {n3}")



