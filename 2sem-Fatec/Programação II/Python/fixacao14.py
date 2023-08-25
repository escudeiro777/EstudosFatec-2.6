#Nayara Nogueira Escudeiro do Nascimento
#Exercicio 14
#Faça um programa para ler uma medida em metros. Mostrar o equivalente em 
# centímetros somente caso a medida seja menor que 100 centímetros.

medida = float(input("Insira sua medida em metros: "))

if medida < 100:
        conversao = medida * 100
        print("Medida em centimetros", conversao)
    
else :
        print("Sua medida é de", medida, "metros")

