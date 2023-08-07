#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int numero [10], qntd = 0, soma=0 , i;
	float media;
	
	for (i = 0; i <= 9; i++){
		printf("Digite o número: ");
		scanf ("%d", &numero[i]);
		if ((numero [i] > 8) && (numero [i]% 2 == 0)){
			
			soma = soma + numero [i];
			qntd++;
		}
	}
	
	if(qntd >0){
		media = (float)soma/qntd;;
		
		printf ("A média é: %2.f\n", media);
		printf("Os numeros selecionados foram: ");
	}else{
		printf ("Não é possível calcular pos nenhum número foi selecionado");
	}
	
	for (i=0; i<=9; i++){
	if ((numero [i] > 8) && (numero [i]% 2 == 0)){
	
		printf("%d ", numero[i]);
	}
}
	return 0;
}
