/*Nayara Escudeiro - SegInfo
Programa��o 1 - exercicio3.cpp

A �rea de um tri�ngulo � calculada a parit da f�rmula B*H/2, sendo que B � a medida da base e H a medida da altura desse pol�gono. Calcule a �rea da figura.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float base, altura, area;
	
	printf ("C�LCULO DA �REA DO TRI�NGULO\n\n");
	
	printf("Informe a medida da base: ");
	scanf("%f", &base);
	
	printf("Informe a medida da altura: ");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf ("O resultado � %.1f", area);
	
	
	return 0;
}
