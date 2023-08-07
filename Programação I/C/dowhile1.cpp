#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, soma = 0;
	
	do {
		printf("Digite um número (0 finaliza a condição): ");
		scanf ("%d", &numero);
		soma = numero + soma;
	} while(numero!=0);
	
	printf("A soma dos números digitados é de %d", soma);
	
	return 0;
}
