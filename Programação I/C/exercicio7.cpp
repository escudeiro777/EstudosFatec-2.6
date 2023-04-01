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
	float nota1, nota2, soma, media;
	
	printf("CÁLCULO DE NOTAS\n");
	
	printf("Digite a primeira nota\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota\n");
	scanf("%f", &nota2);
	
	soma = nota1+nota2;
	
	media = soma / 2;
	
	if (media >= 6){
		printf("O aluno está aprovado!");
	}
	else{
		printf("O aluno está reprovado!");
	}	
	
	printf("A média é %.1f.", media);
	
	return 0;
}
