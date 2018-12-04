#include "pch.h"
#include <iostream>

int main()
{
	int idade;

	printf("Informe a sua idade: ");
	scanf_s("%i", &idade);

	if (idade < 5)
	{
		printf("Bebe");
	}
	else if (idade >= 5 && idade <= 7)
	{
		printf("Infantil A");
	}
	else if (idade >= 8 && idade <= 10)
	{
		printf("Infantil B");
	}
	else if (idade >= 11 && idade <= 13)
	{
		printf("Juvenil A");
	}
	else if (idade >= 14 && idade <= 17)
	{
		printf("Juvenil B");
	}
	else
	{
		printf("Adulto");
	}
}
/*Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:

Infantil A 5 - 7 anos
Infantil B 8 -10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Adulto maiores de 18 anos*/