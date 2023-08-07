/*Nayara Escudeiro - SegInfo
Programação 1 - exercicio4.cpp

A área de um triângulo é calculada a parit da fórmula B*H/2, sendo que B é a medida da base e H a medida da altura desse polígono. Calcule a área da figura.
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float real, cotacao, conversao;
	
	printf("CÂMBIO DE MOEDAS BRASIL - ESTRANGEIRA\n\n");

	
	printf("Informe a quantidade de reais apresentada: ");
	scanf("%f", &real);
	
	printf("Informe a cotação da moeda desejada: ");
	scanf("%f", &cotacao);
	
	conversao = real / cotacao;
	
	
	printf("Aqui esta: %.2f", conversao);
	
	
	return 0;
}
