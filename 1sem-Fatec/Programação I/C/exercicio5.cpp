/*Nayara Escudeiro - SegInfo
Programação 1 - exercicio5.cpp
KM em $
*/

#include <stdio.h>
#include <locale.h>
#define valor_fixo 0.025478;
int main(){
	
	setlocale (LC_ALL, "");
	
	float km, valor_receber;
	
	printf("Informe a quilometragem rodada: ");
	scanf("%f", &km);
	
	valor_receber = km * valor_fixo;
	
	printf("Você recebeu %.2f R$", valor_receber);
	
	return 0;
}
