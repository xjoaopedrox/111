nota1 = float(input("Digite sua primeira nota: "))
nota2 = float(input("Digite sua segunda nota: "))

media = (nota1 + nota2) / 2

if media >= 6.0:
    print(f"Parabéns, você foi aprovado! Sua média é {media:.2f}.")
else:
    print("Você está de recuperação.")
    exame = float(input("Digite o valor do seu exame: "))
    
    nova_media = (media + exame) / 2
    
    if nova_media >= 5.0:
        print(f"Você foi aprovado em exame. Sua nova média é {nova_media:.2f}.")
    else:
        print(f"Você não foi aprovado. Sua nova média é {nova_media:.2f}.")
