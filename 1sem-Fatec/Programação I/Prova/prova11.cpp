Programa��o 1 - prova11.cpp
22/04/2023

Enunciado: Crie um programa que exiba a mensagem SALDO DEVEDOR caso o saldo da conta corrente de um cliente seja negativo. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//in�cio

int main(){
    
	//inclus�o de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declara��o de vari�veis
	float saldo_total, gasto, saldo_devedor;
	
	printf("C�LCULO DE SALDO \n\n");
	
	//entrada de dados
	printf("Informe o limite da sua conta: ");
	scanf("%f", &saldo_total);
	
	printf("Informe quanto voc� gastou (total): ");
	scanf("%f", &gasto);
	
    saldo_devedor = saldo_total - gasto;
	
	
	//saida de dados
	printf("Seu saldo � de %.2f.", saldo_devedor);
	
	//verifica��o do saldo devedor
    if (saldo_devedor < 0){
        printf(" SALDO DEVEDOR!");
    }
	return 0;
}
