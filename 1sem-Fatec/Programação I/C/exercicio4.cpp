/*Nayara Escudeiro - SegInfo
Programa��o 1 - exercicio4.cpp

A �rea de um tri�ngulo � calculada a parit da f�rmula B*H/2, sendo que B � a medida da base e H a medida da altura desse pol�gono. Calcule a �rea da figura.
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float real, cotacao, conversao;
	
	printf("C�MBIO DE MOEDAS BRASIL - ESTRANGEIRA\n\n");

	
	printf("Informe a quantidade de reais apresentada: ");
	scanf("%f", &real);
	
	printf("Informe a cota��o da moeda desejada: ");
	scanf("%f", &cotacao);
	
	conversao = real / cotacao;
	
	
	printf("Aqui esta: %.2f", conversao);
	
	
	return 0;
}
