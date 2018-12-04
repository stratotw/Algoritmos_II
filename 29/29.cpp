#include "pch.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c;
	printf("Digite a primeira medida:\n");
	scanf_s("%f", &a);
	printf("Digite a segunda medida:\n");
	scanf_s("%f", &b);
	printf("Digite a terceira medida:\n");
	scanf_s("%f", &c);

	if (a + b > c || c + b > a || a + c > b)
	{
		printf("Pode ser um triangulo\n");

		if (a == b && a == c && b == c){
			printf("O triangulo eh equilatero\n");
		}
		else if (a == b && a == c || b == c){
			printf("O triangulo eh isosceles\n");
		}
		else{
			printf("O triangulo eh escaleno\n");
		}
	}
	else
		printf("Os valores nao podem formar um triangulo");
}

/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.*/
