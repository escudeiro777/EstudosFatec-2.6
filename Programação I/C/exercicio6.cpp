#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	float velocidade, tempo, distancia, qntd_total ,qntd_gasolina_inicial, qntd_gasolina_final, abastecimento, gasto, verificacao, desempenho;
	
	printf ("C�LCULOS DE DIST�NCIA\n\n");
	
	printf ("Em qual a velocidade m�dia voc� correu?: ");
	scanf("%f", &velocidade);
	
	printf ("Em quanto tempo voc� chegou em seu destino?: ");
	scanf("%f", &tempo);
	
	distancia = tempo * velocidade;
	
	printf ("Voc� percorreu %.2f quil�metros" , distancia);
	
	
	printf ("\n\nC�LCULOS DE COMBUST�VEL\n\n");
	
	printf ("Quantos litros de gasolina tinha no carro?: ");
	scanf("%f", &qntd_gasolina_inicial);
	
	printf ("Quantos litros de gasolina voc� deixou no carro?: ");
	scanf("%f", &qntd_gasolina_final);
	
	printf ("Voc� abasteceu o carro? Pressione 1 caso tenha abastecido e 2 caso n�o.");
	scanf ("%f", &verificacao);
	
	if (verificacao == 1)
	{
		printf ("Quantos litros voc� abasteceu?: ");
		scanf("%f", &abastecimento);
		
		qntd_total = qntd_gasolina_final + abastecimento;
	}
	else
	{
		qntd_total = qntd_gasolina_final;
	}
	
	gasto = qntd_gasolina_inicial - qntd_total;
	
	printf ("Voc� gastou %.2f litros" , gasto);
	
	
	printf ("\n\nC�LCULO DO DESEMPENHO DO VE�CULO\n\n");
	
		if (gasto == 0)
	{
		printf ("O sistema n�o consegue calcular o desempenho com o tanque cheio");
	}
	else
	{
	desempenho = distancia / gasto;
	printf ("O desempenho do ve�culo � %.1fKM/L/n", desempenho);
	}
	
	if (desempenho >= 12)
	{
		printf ("O desempenho do ve�culo est� bom!");
	}
	
	

	return 0;
}
