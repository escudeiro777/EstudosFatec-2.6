#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	int qntd = 0, soma = 0, numero;
	float media;

	printf("EXERC�CIO DE M�DIA \n");

	do {
		do { 	
			printf("Digite um n�mero (0 finaliza a condi��o): ");
			scanf("%d", &numero);
			if (numero < 0)
			{
				printf("\nN�o aceitamos numeros negativos. Digite Novamente: ");
			}
		} while (numero < 0);

		soma = numero + soma;
		if (numero != 0)
		{
			qntd++;
		}
	} while (numero != 0);

	if (qntd > 0)
	{
		media = float(soma) / qntd;
	}

	printf("A soma dos n�meros digitados � de %d\n", soma);
	printf("Foram digitados %d n�meros\n", qntd);
	printf("A m�dia aritm�tica dos n�meros digitados � de %.2f\n", media);

	return 0;
}
