#include "pch.h"
#include <iostream>

using namespace std;

struct hm
{
	int hora;
	int minuto;
};

int lerdados()
{
	int a;
	printf("Digite os minutos para converter: ");
	cin >> a;

	return a;
}

int main()
{
	int dado = lerdados();
	int h;
	float m;

	hm data;

	data.hora = (dado / 60);
	data.minuto = (dado % 60);

	printf(" %i transformado em horas e : %i horas %i minutos \n ", dado, data.hora, data.minuto);

	system("Pause");
	return 0;
}

/*Escreva uma função que receba um número inteiro que representa um intervalo de
tempo medido em minutos e devolva o correspondente número de horas e minutos
(por exemplo, converte 131 minutos em 2 horas e 11 minutos). Use uma struct como
a seguinte:
struct hm {
int horas;
int minutos;
};*/