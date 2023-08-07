/*Nayara Escudeiro - SegInfo
Programa��o 1 - prova10.cpp
22/04/2023

Enunciado: Sabe-se que para calcular o per�metro de um tri�ngulo � necess�rio somar as medidas de seus lados. 
Crie um programa que permita saber se o per�metro de um tri�ngulo � pequeno (at� 30 cm),m�dio (de 31 a 60 cm)
ou grande (acima de 60 cm). Considere que as medidas dos lados s�o n�meros inteiros. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//in�cio

int main(){
    
	//inclus�o de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declara��o de vari�veis
	int lado_1, lado_2, lado_3, perimetro;
	
	printf("C�LCULO DO PER�METRO DE TRI�NGULOS\n\n");
	
	//entrada de dados
	printf("Informe o tamanho da base do tri�gulo em CENT�METROS (use apenas n�meros): ");
	scanf("%d", &lado_1);
	
	printf("Informe o tamanho do lado esquerdo do tri�gulo em CENT�METROS (use apenas n�meros): ");
	scanf("%d", &lado_2);
	
		printf("Informe o tamanho do lado direito do tri�gulo em CENT�METROS (use apenas n�meros): ");
	scanf("%d", &lado_3);
	
	perimetro = lado_1 + lado_2 + lado_3;
	
	//saida de dados
	printf("O per�metro do tri�ngulo � %.1d CM.", perimetro);
	
	//verifica��o do tamanho do tri�ngulo
    if (perimetro <=30){
        printf(" O tri�ngulo � pequeno");
        
    } else if (perimetro <=60){
        printf(" O tri�ngulo � m�dio");
        
    } else {
	printf(" O tri�ngulo � grande");
    }
	
	return 0;
}
