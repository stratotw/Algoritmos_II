#include "pch.h"
#include <iostream>

int main()
{
	int a, c = 0, y = 0;

	for (a = 0; a < 5; a++) {
		printf("Informe o %i numero: ", a + 1);
		scanf_s("%i", &c);
		if (c < 0) {
			y = y + 1;
			c = 0;
		}
	}
	system("cls");
	printf("Numeros negativos: %i\n", y);
}

/*Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos
destes valores são negativos, escrevendo esta informação.*/