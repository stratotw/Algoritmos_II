#include "pch.h"
#include <iostream>

int main()
{
	int i, n = 0, quant;
	float salario, vc, total_vendas = 0, total_carro, total;


	printf("Informe o valor do salario fixo: ");
	scanf_s("%f", &salario);
	printf("Informe a quantidades de carros vendidos: ");
	scanf_s("%i", &quant);
	for (i = 0; i < quant; i++) {
		system("cls");
		printf("Informe o valor da venda do %i carro: ", i + 1);
		scanf_s("%f", &vc);
		total_vendas += vc + 50;
	}

	total_carro = ((total_vendas / 100) * 105);
	system("cls");
	printf("O total do salario fixo eh: %.2f\n", salario * 2);
	printf("O total das vendas dos carros mais a comissao eh: %.2f\n", total_carro);
	printf("O total do salario eh: %.2f\n", (total_carro + (salario * 2)));
}

/*A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e
mais 5% do valor das vendas. Faça um algoritmo que determine o salário total de
um vendedor.*/
