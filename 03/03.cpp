#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int A, M, D, qd;

	printf("Entre com a quantidade de dias: ");
	scanf_s("%d", &qd);

	A = qd / 360;
	M = (qd % 360) / 30;
	D = (qd % 360) % 30;

	printf("\n %d ano(s) %d mese(s) e %d dia(s) ", A, M, D);
}
/*Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a
expressa em anos, meses e dias*/