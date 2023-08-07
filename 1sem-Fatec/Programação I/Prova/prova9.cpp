/*Nayara Escudeiro - SegInfo
Programação 1 - prova9.cpp
22/04/2023

Enunciado: Crie um programa que peça ao usuário o valor atual do salário e o percentual 
de aumento do salário, que poderá ter casas decimais). Em seguida, o programa deverá exibir 
o valor do aumento (com duas casas decimais) e o novo valor do salário (com duas casas decimais). 
Por exemplo, se o salário atual for 1000 e o percentual de aumento for 10, o valor do aumento 
deverá ser 100 e o novo valor do salário deverá ser 1100. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//início

int main(){
    
	//inclusão de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declaração de variáveis
	float salario_normal, percentual, aumento, salario_novo;
	
	//entrada de dados
	printf("Informe seu salário atual: ");
	scanf("%f", &salario_normal);
	
	printf("Informe o percentual de aumento: ");
	scanf("%f", &percentual);
	
	aumento = percentual/100 * salario_normal;
	salario_novo = salario_normal + aumento;
	
	//saida de dados
	printf("O salário com o aumento é de %.2f R$", salario_novo);
	
	
	return 0;
}
