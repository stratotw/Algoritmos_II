#include "pch.h"
#include <iostream>

int main()
{
	int cont, n, soma = 0;

	printf("Escreva um numero inteiro positivo:\n");
	scanf_s("%i", &n);
	for (cont = 1; cont <= n; cont++)
	{
		soma += cont;
	}
	printf("A soma dos numeros eh: %i", soma);
	return 0;
}
/*Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros
positivos.*/