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



int main()
{
	helloworld();

	int a = somar2valores(55, 44);
	printf("Resultado da soma eh: %i\n\n", a);
	
	system("pause");
}