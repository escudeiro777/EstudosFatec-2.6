#Nayara Nogueira Escudeiro do Nascimento
#Exercício 13
# Escreva um programa para ler as notas N1 e N2 obtidas por um aluno que cursou a 
# disciplina Programação II, e em seguida calcular e mostrar média obtida. Caso a nota 
# da N1 tenha sido maior ou igual a 8.0, mostrar também a mensagem “Foi bem na 
# N1”.
avaliacao = 0
n1 = float(input("Insira sua nota da N1: "))

if n1 >= 8:
         
        print("Foi bem na N1!")

n2 = float(input("Insira sua nota da N2: "))

media = (n1 + n2)/2

print ("Sua média ficou em", media)