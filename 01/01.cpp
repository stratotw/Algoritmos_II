#include "pch.h"
#include <iostream>
#include <stdio.h>

float main()
{
	float X1, X2, Y1, Y2, result;

	printf("Informe o numero X1:\n");
	scanf_s("%f", &X1);
	system("cls");
	printf("Informe o numero X2:\n");
	scanf_s("%f", &X2);
	system("cls");
	printf("Informe o numero Y1:\n");
	scanf_s("%f", &Y1);
	system("cls");
	printf("Informe o numero Y2:\n");
	scanf_s("%f", &Y2);
	system("cls");

	result = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

	printf("O resultado eh: %.2f", result);

	return 0;

}
/*Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no
plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal
cálculo é:*/