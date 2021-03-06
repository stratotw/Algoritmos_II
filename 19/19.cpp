#include "pch.h"
#include <iostream>

void calculolinha(int matriz[2][2])
{
	int mult;
	int linha;
	int i, j;
	int total = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%i", matriz[i][j]);
		}
		printf(" \n");
	}
	printf("\n Qual linha deseja multiplicar: ");
	scanf_s("%i", &linha);

	printf("\n Digite o numero para multiplicar na linha : ");
	scanf_s("%i", &mult);

	for (i = 0; i < linha; i++)
	{
		for (j = 0; j < 2; j++)
		{
			total = total + (matriz[i][j] * mult);
		}
	}

	printf("O total da multiplicacao da linha %i : %i", linha, total);
}

void calculocoluna(int matriz[2][2])
{
	int mult;
	int coluna;
	int i, j;
	int total = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%i", matriz[i][j]);
		}
		printf(" \n");
	}
	printf("\n Qual coluna deseja multiplicar: ");
	scanf_s("%i", &coluna);

	printf("\n Digite o numero para multiplicar na coluna : ");
	scanf_s("%i", &mult);

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < coluna; j++)
		{
			total = total + (matriz[i][j] * mult);
		}
	}

	printf("O total da multiplicacao da coluna %i : %i \n ", coluna, total);

}
int main()
{
	int i, j;
	int op;
	int matriz[2][2];

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matriz[i][j] = (i + (j + 1));
		}
	}

	printf("Deseja multiplicar \n 1- Linha \n 2 - Colina \n Digite : ");
	scanf_s("%i", &op);

	if (op == 1)
	{
		calculolinha(matriz);
	}
	if (op == 2)
	{
		calculocoluna(matriz);
	}

	system("pause");
	return 0;
}

/*Crie uma função capaz de multiplicar uma linha de uma matriz[3][3] por um número
informado pelo usuário. Faça o mesmo para uma coluna da mesma matriz.*/