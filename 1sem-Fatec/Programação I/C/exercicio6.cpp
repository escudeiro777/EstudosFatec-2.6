#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float velocidade, tempo, distancia, qntd_total ,qntd_gasolina_inicial, qntd_gasolina_final, abastecimento, gasto, verificacao, desempenho;
	
	printf ("CÁLCULOS DE DISTÂNCIA\n\n");
	
	printf ("Em qual a velocidade média você correu?: ");
	scanf("%f", &velocidade);
	
	printf ("Em quanto tempo você chegou em seu destino?: ");
	scanf("%f", &tempo);
	
	distancia = tempo * velocidade;
	
	printf ("Você percorreu %.2f quilômetros" , distancia);
	
	
	printf ("\n\nCÁLCULOS DE COMBUSTÍVEL\n\n");
	
	printf ("Quantos litros de gasolina tinha no carro?: ");
	scanf("%f", &qntd_gasolina_inicial);
	
	printf ("Quantos litros de gasolina você deixou no carro?: ");
	scanf("%f", &qntd_gasolina_final);
	
	printf ("Você abasteceu o carro? Pressione 1 caso tenha abastecido e 2 caso não.");
	scanf ("%f", &verificacao);
	
	if (verificacao == 1)
	{
		printf ("Quantos litros você abasteceu?: ");
		scanf("%f", &abastecimento);
		
		qntd_total = qntd_gasolina_final + abastecimento;
	}
	else
	{
		qntd_total = qntd_gasolina_final;
	}
	
	gasto = qntd_gasolina_inicial - qntd_total;
	
	printf ("Você gastou %.2f litros" , gasto);
	
	
	printf ("\n\nCÁLCULO DO DESEMPENHO DO VEÍCULO\n\n");
	
		if (gasto == 0)
	{
		printf ("O sistema não consegue calcular o desempenho com o tanque cheio");
	}
	else
	{
	desempenho = distancia / gasto;
	printf ("O desempenho do veículo é %.1fKM/L/n", desempenho);
	}
	
	if (desempenho >= 12)
	{
		printf ("O desempenho do veículo está bom!");
	}
	
	

	return 0;
}
