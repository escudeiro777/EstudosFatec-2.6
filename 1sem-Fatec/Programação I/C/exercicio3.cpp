/*Nayara Escudeiro - SegInfo
Programação 1 - exercicio3.cpp

A área de um triângulo é calculada a parit da fórmula B*H/2, sendo que B é a medida da base e H a medida da altura desse polígono. Calcule a área da figura.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float base, altura, area;
	
	printf ("CÁLCULO DA ÁREA DO TRIÂNGULO\n\n");
	
	printf("Informe a medida da base: ");
	scanf("%f", &base);
	
	printf("Informe a medida da altura: ");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf ("O resultado é %.1f", area);
	
	
	return 0;
}
