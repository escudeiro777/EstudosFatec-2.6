/*-------------------------
FATEC -  SCS
Seguran�a da Informa��o
Programa��o I
Nayara Escudeiro
Data:01/04
Enunciado: Exercicio de fixa��o - Estrutura de repeti��o IF-ELSE
-------------------------
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int num, resultado;
	
	printf("SAIBA SE O N�MERO � PAR!\n\n");
	
	printf("Digite um n�mero:");
	scanf("%d", &num);
	
	resultado = num % 2;
	
	if (resultado >= 1){
		printf("Esse n�mero � �mpar");
	} 
	else {
			printf("Esse n�mero � par");
	}
	
	return 0;
}
