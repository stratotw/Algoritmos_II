#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void helloworld() //função - tem que estar sempre antes do main
{
	printf("Hello World!\n\n");
}

int somar2valores(int x, int y) // int x, int y = parametros
{
	int c; //cria uma variavel 
	c = x + y; // faz a soma
	return c; // retorna o valor de c
}
int LerNumeroInteiro()
 {
	printf("\nDigitar um numero inteiro: ");
	int numero;
	scanf_s("%i", &numero);
	return numero;
 }


int main()
{
	helloworld();

	int a = somar2valores(55, 44);
	printf("Resultado da soma eh: %i\n\n", a);

	int b = 10;
	int c = 15;
	int d = somar2valores(b, c);
	printf("Resultado da soma eh: %i\n\n", d);

	int num1 = LerNumeroInteiro();
	int num2 = LerNumeroInteiro();
	int f = somar2valores(num1, num2);
	printf("Resultado da soma eh: %i\n\n", f);


	printf("\nDigitar o primeiro numero inteiro: ");
	int num_1;
	scanf_s("%i", &num_1);
	printf("\nDigitar o segundo numero inteiro: ");
	int num_2;
	scanf_s("%i", &num_2);
	somar2valores(num_1, num_2);
	int result = somar2valores(num_1, num_2);
	printf("\nO resultado eh: %i ", result);


	
	system("pause");
}