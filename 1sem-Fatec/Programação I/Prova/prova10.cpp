/*Nayara Escudeiro - SegInfo
Programação 1 - prova10.cpp
22/04/2023

Enunciado: Sabe-se que para calcular o perímetro de um triângulo é necessário somar as medidas de seus lados. 
Crie um programa que permita saber se o perímetro de um triângulo é pequeno (até 30 cm),médio (de 31 a 60 cm)
ou grande (acima de 60 cm). Considere que as medidas dos lados são números inteiros. 
*/

//adicionar bibliotecas 
#include <stdio.h>
#include <locale.h>

//início

int main(){
    
	//inclusão de caracteres especiais
	setlocale (LC_ALL, "");
	
	//declaração de variáveis
	int lado_1, lado_2, lado_3, perimetro;
	
	printf("CÁLCULO DO PERÍMETRO DE TRIÂNGULOS\n\n");
	
	//entrada de dados
	printf("Informe o tamanho da base do triâgulo em CENTÍMETROS (use apenas números): ");
	scanf("%d", &lado_1);
	
	printf("Informe o tamanho do lado esquerdo do triâgulo em CENTÍMETROS (use apenas números): ");
	scanf("%d", &lado_2);
	
		printf("Informe o tamanho do lado direito do triâgulo em CENTÍMETROS (use apenas números): ");
	scanf("%d", &lado_3);
	
	perimetro = lado_1 + lado_2 + lado_3;
	
	//saida de dados
	printf("O perímetro do triângulo é %.1d CM.", perimetro);
	
	//verificação do tamanho do triângulo
    if (perimetro <=30){
        printf(" O triângulo é pequeno");
        
    } else if (perimetro <=60){
        printf(" O triângulo é médio");
        
    } else {
	printf(" O triângulo é grande");
    }
	
	return 0;
}
