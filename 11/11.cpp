#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
	float pi = 3.14159, raio, area;

	printf("Insira os centimetros do raio da circunferencia para saber de sua area total: ");
	scanf_s("%f", &raio);

	area = pi * pow(raio, 2);

	printf("A area desta circunferencia eh: %.2f\n\n", area);

}
/*Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula AREA = π * RAIO​2​ . Utilize as variáveis AREA e RAIO, a constante π (pi =
3.14159) e os operadores aritméticos de multiplicação.*/