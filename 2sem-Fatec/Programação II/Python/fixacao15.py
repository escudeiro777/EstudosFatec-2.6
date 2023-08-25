#Nayara Nogueira Escudeiro do Nascimento
#Exercicio 15
# Faça um programa que solicite ao usuário os dados necessários para calcular a área 
# de um quadrado. Mostrar em seguida o valor correspondente ao dobro da área 
# calculada caso todos os dados fornecidos sejam maiores que zero

side = float(input("Digite o tamanho do lado do quadrado: "))
area = side*side
if side > 0:
    print ("A área do quadrado é: ", area)
    print ("O dobro da área do quadrado é: ", area *2)
else:
    print("O valor 0 é inválido")
