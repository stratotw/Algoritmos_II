#include "pch.h"
#include <iostream>

int main()
{
	int CF, CC;
	printf("Escreva o valor de custo do veiculo:\n");
	scanf_s("%i", &CF);
	system("cls");

	int PD = CF * 0.28;
	int PI = CF * 0.45;
	CC = CF + PD + PI;

	printf("O valor de consumidor do veiculo eh: %i", CC);

}
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.*/