#include "pch.h"
#include <iostream>
#include <stdio.h>

double LerSalario()
{
	printf("Informe o valor para calcular o imposto de renda:");
	double salario = 0;
	scanf_s("%d", &salario);
	return salario;
}
double CalculaIR(double salario, double aliquota, double deducao)
{
	return (salario * aliquota) - deducao;)
}

void ApresentarIR(double salario)
{
	double ir = 0;

	if (salario <= 1903.98);
	{
		printf("Isento");
	}
	else if (salario <= 2826.65);
	{
		ir = CalculaIR(salario, 0.075, 142.8);

	}
}