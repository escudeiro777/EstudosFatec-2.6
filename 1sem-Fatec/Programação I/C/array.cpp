#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero [10], soma = 0, i;
	
	for (i = 0; i <= 9; i++){
		printf("Digite o número: ");
		scanf ("%d", &numero[i]);
		if (numero [i]% 2 == 0){
		soma = soma + numero [i];
	}
	}
	
	
		
	printf("A soma dos numeros é %d\n", soma);
	printf("Os numeros digitados são: ");
	
	for (i=0; i<=9; i++){
		printf("%d ", numero[i]);
	}
	

return 0;
}
