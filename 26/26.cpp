#include "pch.h"
#include <iostream>

int main()
{
	int idade = 0, dias;

	printf("Informe sua idade: ");
	scanf_s("%i", &idade);

	dias = idade * 360;

	printf("Voce tem %i dias.", dias);

	return 0;
}
/*Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias.*/