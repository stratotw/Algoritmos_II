#include "pch.h"
#include <iostream>

int main()
{
	int N1, N2;

	printf("Informe um numero inteiro: \n");
	scanf_s("%i", &N1);
	system("cls");
	printf("Informe um numero inteiro nao negativo: \n");
	scanf_s("%i", &N2);
	system("cls");
	printf("O valor de %i com potencia %i eh: %.2f\n\n", N1, N2, pow(N1, N2));
}
/*Dados um inteiro x e um inteiro não-negativo n, calcular x ​n​.*/