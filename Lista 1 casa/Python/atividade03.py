# 3) Calcule quantos azulejos são necessários para azulejar uma parede. É necessário
# conhecer a altura da parede (AP), a sua largura (LP), e a altura do azulejo (AA) e sua
# largura (LA). Leia os dados através do teclado.

AP=float(input("Qual a altura da parede?:"))
LP=float(input("Qual a largura da parede:?"))
AA=float(input("Qual a altura do azulejo:?"))
LA=float(input("Qual a largura do azulejo:?"))

area_parede = AP*LP
area_azulejo = AA*LA

azulejos_necessários = area_parede/area_azulejo

print(f"Você precisará de {azulejos_necessários:.0f}")
               
