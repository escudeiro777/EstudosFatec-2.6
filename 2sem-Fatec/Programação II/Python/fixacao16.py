#Nayara Nogueira Escudeiro do Nascimento
#Exercício 16
# Ler as notas de avaliação de um jogador sobre a 1ª e 2ª. fases de um Game e em 
# seguida escrever uma mensagem informando a média aritmética destas notas e uma 
# mensagem informando “Experiência boa”, caso a média seja maior ou a 8.0 ou a 
# mensagem “Experiência ruim” caso contrário.

nota1 = float(input("Insira uma nota referente a primeira fase do jogo: "))
nota2 = float(input("Insira uma nota referente a segunda fase do jogo: "))

media = nota1+nota2/2

if media >= 8:
    print("Experiência boa")
else: 
    print("Experiência ruim")