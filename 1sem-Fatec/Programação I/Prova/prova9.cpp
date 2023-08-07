/*Nayara Escudeiro - SegInfo
Programa��o 1 - prova9.cpp
22/04/2023

Enunciado: Crie um programa que pe�a ao usu�rio o valor atual do sal�rio e o percentual 
de aumento do sal�rio, que poder� ter casas decimais). Em seguida, o programa dever� exibir 
o valor do aumento (com duas casas decimais) e o novo valor do sal�rio (com duas casas decimais). 
Por exemplo, se o sal�rio atual for 1000 e o percentual de aumento for 10, o valor do aumento 
dever� ser 100 e o novo valor do sal�rio dever� ser 1100. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//in�cio

int main(){
    
	//inclus�o de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declara��o de vari�veis
	float salario_normal, percentual, aumento, salario_novo;
	
	//entrada de dados
	printf("Informe seu sal�rio atual: ");
	scanf("%f", &salario_normal);
	
	printf("Informe o percentual de aumento: ");
	scanf("%f", &percentual);
	
	aumento = percentual/100 * salario_normal;
	salario_novo = salario_normal + aumento;
	
	//saida de dados
	printf("O sal�rio com o aumento � de %.2f R$", salario_novo);
	
	
	return 0;
}
