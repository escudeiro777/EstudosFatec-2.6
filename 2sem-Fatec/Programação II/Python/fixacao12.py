#Nayara Nogueira Escudeiro do Nascimento
#Exercicio 12
# Em um jogo de Fazenda existe a opção de compras de frutas para o jogador 
# manter em sua despensa. No empório virtual as frutas são vendidas pelos 
# seguintes preços: Maçã: R$ 2,30 por Kg, Melancia: R$ 4,00 a unidade e 
# Laranja R$ 0,30 a unidade. Escreva um programa para ler a quantidade de 
# maças, laranjas e melancias compradas, calcular e mostrar na tela o valor a 
# pagar

#maca é o quilo
maca = 2.30
kgMaca = float(input ("Quantos quilograma de maçã você pegou: "))
precoFinalMaca = maca * kgMaca

#melancia é unidade
melancia = 4
qntdMelancia = float(input ("Quantas melancias você pegou?:" ))
precoFinalMelancia = melancia * qntdMelancia

#laranja é unidade
laranja = 0.30
qntdLaranja = float(input("Quantas laranjas você pegou?: "))
precoFinalLaranja = laranja * qntdLaranja

precoTotal = precoFinalLaranja + precoFinalMaca + precoFinalMelancia

print ("Sua conta deu: R$", precoTotal)

