#include "pch.h"
#include <iostream>

int main()
{
	float base, altura;

	printf("CALCULO DA AREA DE UM TRIANGULO:\nInforme o valor da base: \n");
	scanf_s("%f", &base);
	system("cls");
	printf("Informe o valor da altura: \n");
	scanf_s("%f", &altura);
	system("cls");
	printf("O valor da area do triangulo eh: %.2f", ((base * altura) / 2));
}
/*Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Area = BASE * 2ALTURA . Utilize as variáveis AREA, BASE e ALTURA e os operadores
aritméticos de multiplicação e divisão.*/