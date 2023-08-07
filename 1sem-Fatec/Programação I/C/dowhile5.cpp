#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int qntd_prod = 0, codigo, qntd_item = 0, qntd;
	float preco = 0, valor_total = 0;
	
	do{
		printf("Digite o código do produto: \n");
		scanf("%d", &codigo);
		qntd_prod++;
		
		printf("Digite quantidade de itens desse produto: \n");
		scanf("%d", &qntd_item);
		qntd_item++;
		
		printf("Digite o preço da unidade do produto: \n");
		scanf("%f", &preco);
	} while(codigo != 0);
	
	
	valor_total = qntd_item * preco;
	
	printf("Você comprou %d produtos\n", qntd_prod);
	printf("Você comprou %d itens\n", qntd_item);
	printf("O valor total da sua conta é %f", valor_total);
}
