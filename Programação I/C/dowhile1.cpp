#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero, soma = 0;
	
	do {
		printf("Digite um n�mero (0 finaliza a condi��o): ");
		scanf ("%d", &numero);
		soma = numero + soma;
	} while(numero!=0);
	
	printf("A soma dos n�meros digitados � de %d", soma);
	
	return 0;
}
