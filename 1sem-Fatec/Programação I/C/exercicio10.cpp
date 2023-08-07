/*Nayara Escudeiro - SegInfo
Programação 1 - exercicio10.cpp
Enunciado: Exercicio de fixação - Estrutura de repetição IF-ELSE
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "");
	
	float km, valor_fixo ,valor_receber;
	
	printf("Informe a quilometragem rodada: ");
	scanf("%f", &km);
	
	if (km < 100){
		valor_fixo = 0.025478;
	}
	else{
		valor_fixo = 0.035263;
	}
	
	valor_receber = km * valor_fixo;
	printf("Você recebeu %.2f R$", valor_receber);
	
	return 0;
}
