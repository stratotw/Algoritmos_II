#include "pch.h"
#include <iostream>

int main()
{
	int v_compra = 0, valor, troco, um, dez, cem;
	printf("Informe o valor da compra: \n");
	scanf_s("%i", &v_compra);
	printf("Informe o dinheiro recebido: \n");
	scanf_s("%i", &valor);

	troco = valor - v_compra;
	cem = troco / 100;
	dez = ((troco - (cem * 100)) / 10);
	um = (troco - ((cem * 100) + (dez * 10)));

	printf("\nValor da compra: %i\nValor do troco: %i\nQuantidade de notas: %i de 100 reais, %i de 10 reais e %i de 1 real\n\n",v_compra, troco, cem, dez, um);

}

/*Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco.Mostre
também : o valor da compra, o valor do troco e a quantidade de cada tipo de nota do
troco.Suponha que o sistema monetário não utilize moedas.*/