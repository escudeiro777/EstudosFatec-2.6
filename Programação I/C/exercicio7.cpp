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
	float nota1, nota2, soma, media;
	
	printf("C�LCULO DE NOTAS\n");
	
	printf("Digite a primeira nota\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota\n");
	scanf("%f", &nota2);
	
	soma = nota1+nota2;
	
	media = soma / 2;
	
	if (media >= 6){
		printf("O aluno est� aprovado!");
	}
	else{
		printf("O aluno est� reprovado!");
	}	
	
	printf("A m�dia � %.1f.", media);
	
	return 0;
}
