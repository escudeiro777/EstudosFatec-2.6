#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	int num [10], soma = 0, i;
	
	for (i = 0; i <= 9; i++){
		printf("Digite o número: ");
		scanf ("%d", &num[i]);
		
		if (num % 2 == 0){
		soma = soma + num [i];
	}
	}
		

		


return 0;
}
