#include "pch.h"
#include <iostream>

int main()
{
	int i, n, soma = 0;

	printf("Informe um numero natural: \n\n");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		printf(" %d ", i * 2 + 1);
	return 1;
}
/*Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
Exemplo: Para n=4 a saída deverá ser 1,3,5,7.*/

