#include "pch.h"
#include <iostream>

int main()
{
	float N1, N2, N3, result;

	printf("Informe a primeira nota:\n");
	scanf_s("%f", &N1);
	system("cls"),
		printf("Informe a segunda nota:\n");
	scanf_s("%f", &N2);
	system("cls"),
		printf("Informe a terceira nota:\n");
	scanf_s("%f", &N3);
	system("cls"),

		result = (((2 * N1) + (3 * N2) + (5 * N3)) / (2 + 3 + 5));

	printf(" A media ponderada eh: %.1f", result);
}
/*Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5,
respectivamente.*/
