#include "pch.h"
#include <iostream>

int soma(int x, int y)
{
	int a;
	a = x + y;
	return a;
}

int subtracao(int x, int y)
{
	int a;
	a = x - y;
	return a;
}
int divisao(int x, int y)
{
	int a;
	a = x / y;
	return a;
}
int multiplicacao(int x, int y)
{
	int a;
	a = x * y;
	return a;
}

int main()
{ 
	int calc;
	int num_1;
	int num_2;
	int result;

	inicio: printf("Escolha:\n1. Soma.\n2. Subtracao.\n3. Divisao.\n4. Multiplicacao.\n\n");
	scanf_s("%i", &calc);
	switch (calc)
	{
	case 1:
		printf("\nDigitar o primeiro numero inteiro: ");
		scanf_s("%i", &num_1);
		printf("\nDigitar o segundo numero inteiro: ");
		scanf_s("%i", &num_2);
		result = soma(num_1, num_2);
		printf("\nO Resultado eh: %i\n", result);
		system("pause");
		system("cls");
		goto inicio;
		break;

	case 2:
		printf("\nDigitar o primeiro numero inteiro: ");
		scanf_s("%i", &num_1);
		printf("\nDigitar o segundo numero inteiro: ");
		scanf_s("%i", &num_2);
		result = subtracao(num_1, num_2);
		printf("\nO Resultado eh: %i\n", result);
		system("pause");
		system("cls");
		goto inicio;
		break;

	case 3:
		printf("\nDigitar o primeiro numero inteiro: ");
		scanf_s("%i", &num_1);
		printf("\nDigitar o segundo numero inteiro: ");
		scanf_s("%i", &num_2);
		result = divisao(num_1, num_2);
		printf("\nO Resultado eh: %i\n", result);
		system("pause");
		system("cls");
		goto inicio;
		break;

	case 4:
		printf("\nDigitar o primeiro numero inteiro: ");
		scanf_s("%i", &num_1);
		printf("\nDigitar o segundo numero inteiro: ");
		scanf_s("%i", &num_2);
		result = multiplicacao(num_1, num_2);
		printf("\nO Resultado eh: %i\n", result);
		system("pause");
		system("cls");
		goto inicio;
		break;

	default:
		printf("Numero Incorreto!");
		goto inicio;
	}

}


