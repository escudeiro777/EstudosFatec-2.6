/*42a.cpp - recebe as medidas dos lados de um tri�ngulo e exibe se
� is�celes, escaleno e equil�tero, mas antes verifica se � um
tri�ngulo e exibe mensagem caso n�o seja
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	float lado_ab, lado_bc, lado_ac;

	do {
		printf("Medida do lado AB: ");
		scanf("%f", &lado_ab);

		if (lado_ab <= 0)
		{
			printf("Medida do lado AB inv�lida.Tente novamnte.\n");
		}
	} while (lado_ab <= 0);

	do {
		printf("Medida do lado BC: ");
		scanf("%f", &lado_bc);

		if (lado_bc <= 0)
		{
			printf("Medida do lado AB inv�lida.Tente novamnte.\n");
		}
	} while (lado_bc <= 0);

	do {
		printf("Medida do lado AC: ");
		scanf("%f", &lado_ac);
		if (lado_ac <= 0)
		{
			printf("Medida do lado AB inv�lida.Tente novamnte.\n");
		}
	} while (lado_ac <= 0);

	/*repare que nessa solu��o coloquei o primeiro if para verificar se
	n�o � um tri�ngulo, ao inv�s de colocar o bloco de ifs que verifica
	o tipo de tri�ngulo para ser executado se se tratar de um tri�ngulo,
	como foi feito na solu��o anterior */

	if (!((lado_ab < lado_bc + lado_ac) && (lado_ac < lado_ab + lado_bc) && (lado_bc < lado_ab + lado_ac)))
	{
		printf("N�O � UM TRI�NGULO\n");
	}
	else if ((lado_ab == lado_bc) && (lado_ac == lado_bc))
	{
		printf("EQUIL�TERO\n");
	}
	else if ((lado_ab == lado_bc) && (lado_ab != lado_ac))
	{
		printf("IS�CELES\n");
	}
	else if ((lado_ab != lado_bc) && (lado_ab != lado_ac))
	{
		printf("ESCALENO\n");
	}

	return 0;
}
