#include "pch.h"
#include <iostream>

int main()
{
	int i, soma = 0, valor = 0, quant;

	printf("informe quantos numeros serao digitados: ");
	scanf_s("%i", &quant);

	for (i = 0; i < quant; i++){
		system("cls");
		printf("Informe o numero %i: \n", i + 1);
		scanf_s("%i", &valor);
		if (valor % 2 == 0) {
			soma += valor;
		}
	}
	printf("A soma dos numeros pares digitados eh: %i\n\n", soma);
}

/*Dados ​n (quantidade de números que serão digitados) ​e depois a sequência de ​n
números inteiros, determinar a soma dos números que são pares.*/