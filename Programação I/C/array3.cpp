#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero [10], qntd = 0, i;
	
	for (i = 0; i <= 9; i++){
		printf("Digite o n�mero: ");
		scanf ("%d", &numero[i]);
		if (numero [i]% 2 != 0){
		qntd = qntd + 1;
		}
	}
	
	printf("Foram %d n�meros imp�res digitados \n", qntd);
	printf("Os n�meros impares digitados foram: ");

	for (i=0; i<=9; i++){
	if (numero [i]% 2 != 0){
	
		printf("%d ", numero[i]);
	}
}
	

	return 0;
}
	
