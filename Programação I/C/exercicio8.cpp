/*-------------------------
FATEC -  SCS
Segurança da Informação
Programação I
Nayara Escudeiro
Data:01/04
Enunciado: Exercicio de fixação - Estrutura de repetição IF-ELSE
-------------------------
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int num, resultado;
	
	printf("SAIBA SE O NÚMERO É PAR!\n\n");
	
	printf("Digite um número:");
	scanf("%d", &num);
	
	resultado = num % 2;
	
	if (resultado >= 1){
		printf("Esse número é ímpar");
	} 
	else {
			printf("Esse número é par");
	}
	
	return 0;
}
