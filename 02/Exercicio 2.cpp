#include "pch.h"
#include <iostream>

int main()
{
	float N1, N2, N3, R, S, result;

	printf("Informe o primeiro numero:\n");
	scanf_s("%f", &N1);
	system("cls");
	printf("Informe o segundo numero:\n");
	scanf_s("%f", &N2);
	system("cls");
	printf("Informe o o terceiro numero:\n");
	scanf_s("%f", &N3);
	system("cls");

	R = pow((N1 + N2), 2),
	S = pow((N2 + N3), 2),
	result = ((R + S) / 2);

	printf("O resultado eh: %.2f\n", result);

	return 0;

}
