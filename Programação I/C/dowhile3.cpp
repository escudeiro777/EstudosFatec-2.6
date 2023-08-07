/*42a.cpp - recebe as medidas dos lados de um triângulo e exibe se
é isóceles, escaleno e equilátero, mas antes verifica se é um
triângulo e exibe mensagem caso não seja
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
			printf("Medida do lado AB inválida.Tente novamnte.\n");
		}
	} while (lado_ab <= 0);

	do {
		printf("Medida do lado BC: ");
		scanf("%f", &lado_bc);

		if (lado_bc <= 0)
		{
			printf("Medida do lado AB inválida.Tente novamnte.\n");
		}
	} while (lado_bc <= 0);

	do {
		printf("Medida do lado AC: ");
		scanf("%f", &lado_ac);
		if (lado_ac <= 0)
		{
			printf("Medida do lado AB inválida.Tente novamnte.\n");
		}
	} while (lado_ac <= 0);

	/*repare que nessa solução coloquei o primeiro if para verificar se
	não é um triângulo, ao invés de colocar o bloco de ifs que verifica
	o tipo de triângulo para ser executado se se tratar de um triângulo,
	como foi feito na solução anterior */

	if (!((lado_ab < lado_bc + lado_ac) && (lado_ac < lado_ab + lado_bc) && (lado_bc < lado_ab + lado_ac)))
	{
		printf("NÃO É UM TRIÂNGULO\n");
	}
	else if ((lado_ab == lado_bc) && (lado_ac == lado_bc))
	{
		printf("EQUILÁTERO\n");
	}
	else if ((lado_ab == lado_bc) && (lado_ab != lado_ac))
	{
		printf("ISÓCELES\n");
	}
	else if ((lado_ab != lado_bc) && (lado_ab != lado_ac))
	{
		printf("ESCALENO\n");
	}

	return 0;
}
