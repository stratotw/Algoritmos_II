#include "pch.h"
#include <iostream>

int main()
{
	int i, valor, maior = 0, menor = 999;

	for (i = 0; i < 50; i++) {
		printf("Informe o %i numero: \n", i + 1);
		scanf_s("%i", &valor);
		if (valor > maior) {
			maior = valor;
		}
		if (valor < menor) {
			menor = valor;
		}
		system("cls");
	}
	printf("O maior numero eh %i, e o menor numero e %i.\n\n", maior, menor);
}

/*Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles.
Mostre o resultado.*/
