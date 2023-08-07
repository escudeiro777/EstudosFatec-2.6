/* 33.cpp - calcula e exibe a nota final (média entre duas notas)
   e exibe a mensagem "APROVADO" se a nota final for pelo menos 6
   ou a mensagem "EXAME" se a nota final estiver entre 3 e 5,9
   ou a mensagem "REPROVADO" se a nota final for menor que 3
   por Nayara Escudeiro - 20/05/2023
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota_final;
    
	do {
    printf("Qual a primeira nota?: (0-10) ");
	scanf("%f", &nota1);
	
	if ((nota1<0)||(nota1>10)){
		printf("A nota precisa estar entre 0 e 10. Digite novamente\n");
	}
	
	} while ((nota1 < 0) || (nota1 > 10));
	
  	do {
    printf("Qual a segunda nota?: (0-10) ");
	scanf("%f", &nota2);
	
	if ((nota2<0)||(nota2>10)){
		printf("A nota precisa estar entre 0 e 10. Digite novamente\n");
	}
	
	} while ((nota2 < 0) || (nota2 > 10));
    
    nota_final = (nota1 + nota2) / 2;
    
    printf("Nota final: %.1f", nota_final);
	
    if (nota_final < 3) {
    	printf("\nREPROVADO");
	}
	else if (nota_final <= 5.9) {
		printf("\APROVADO");
	}
	else {
		printf("\nAPROVADO");
	}
	
	return 0;
}


