#include "pch.h"
#include <iostream>

int main()
{
	int a, b, result;

	printf("Informe o primeiro numero:\n");
	scanf_s("%i", &a);
	printf("Informe o segundo numero:\n");
	scanf_s("%i", &b);

	result = a % b;

	if (result == 0)
	{
		printf("O numero %i eh multiplo de %i.", a, b);
	}
	else
	{
		printf("O numero %i nao eh multiplo de %i.", a, b);
	}
}
/*Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São
múltiplos" ou "Não são múltiplos".*/