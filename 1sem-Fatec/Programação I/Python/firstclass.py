'''
-------------------------
FATEC -  SCS
Segurança da Informação
Programação I
Nayara Escudeiro
Data:
Enunciado: 11/02/2023
-------------------------
'''

#Váriáveis

saldo = float(input("Quantos reais você tem?"))
valorProd = float(input("Qual o preço do produto?"))
qntd = 0

#Processo

while (saldo >= valorProd):
    qntd = qntd + 1
    saldo - valorProd
    print (f"Saldo: {saldo} | Itens comprados: {qntd}")

#Saída
print(f"Puts, o dinheiro acabou =(. Você comprou {qntd} produtos")