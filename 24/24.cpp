#include "pch.h"
#include <iostream>

int main()
{
	int A, B, C;
	printf("Informe o valor da variavel A: \n");
	scanf_s("%i", &A);
	printf("Informe o valor da variavel B: \n");
	scanf_s("%i", &B);

	C = A;
	A = B;
	B = C;

	printf("Os valores trocados sao: \nA = %i\nB = %i\n\n", A, B);
}
/*Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável
B passe a possuir o valor da variável A. Apresente os valores trocados.*/