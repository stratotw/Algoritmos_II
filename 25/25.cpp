#include "pch.h"
#include <iostream>

int main()
{
	float salariob, salariol = 0, div;

	printf("Informe o valor do salario bruto \n");
	scanf_s("%f", &salariob);

	div = salariob / 100;
	salariol = div * 90;
	div = 0;
	div = salariol / 100;
	salariol = div * 95;

	printf("O salario liquido eh: %.2f\n\n", salariol);
}
/*Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um
outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.*/