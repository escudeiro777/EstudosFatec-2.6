Programação 1 - prova11.cpp
22/04/2023

Enunciado: Crie um programa que exiba a mensagem SALDO DEVEDOR caso o saldo da conta corrente de um cliente seja negativo. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//início

int main(){
    
	//inclusão de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declaração de variáveis
	float saldo_total, gasto, saldo_devedor;
	
	printf("CÁLCULO DE SALDO \n\n");
	
	//entrada de dados
	printf("Informe o limite da sua conta: ");
	scanf("%f", &saldo_total);
	
	printf("Informe quanto você gastou (total): ");
	scanf("%f", &gasto);
	
    saldo_devedor = saldo_total - gasto;
	
	
	//saida de dados
	printf("Seu saldo é de %.2f.", saldo_devedor);
	
	//verificação do saldo devedor
    if (saldo_devedor < 0){
        printf(" SALDO DEVEDOR!");
    }
	return 0;
}
