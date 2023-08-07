#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	int qntd = 0, soma = 0, numero;
	float media;

	printf("EXERCÍCIO DE MÉDIA \n");

	do {
		do { 	
			printf("Digite um número (0 finaliza a condição): ");
			scanf("%d", &numero);
			if (numero < 0)
			{
				printf("\nNão aceitamos numeros negativos. Digite Novamente: ");
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

	printf("A soma dos números digitados é de %d\n", soma);
	printf("Foram digitados %d números\n", qntd);
	printf("A média aritmética dos números digitados é de %.2f\n", media);

	return 0;
}
