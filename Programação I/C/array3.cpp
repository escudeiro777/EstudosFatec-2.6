#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero [10], qntd = 0, i;
	
	for (i = 0; i <= 9; i++){
		printf("Digite o número: ");
		scanf ("%d", &numero[i]);
		if (numero [i]% 2 != 0){
		qntd = qntd + 1;
		}
	}
	
	printf("Foram %d números impáres digitados \n", qntd);
	printf("Os números impares digitados foram: ");

	for (i=0; i<=9; i++){
	if (numero [i]% 2 != 0){
	
		printf("%d ", numero[i]);
	}
}
	

	return 0;
}
	
