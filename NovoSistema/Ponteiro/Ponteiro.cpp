#include "pch.h"
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "");

	int *x, valor, y;
	valor = 35;
	x = &valor; //atribuindo o endereço de valor a x;
	y = *x; //atribuindo o conteudo da variavel apontada por x e y;
	valor = 36;

	printf("Endereco da variavel comum valor: %p\n", &valor);
	printf("Lendo o conteudo do ponteiro x: %p\n", x);
	printf("Endereco da variavel ponteiro x: %p\n", &x);
	printf("Conteudo da variavel apontada por x: %d\n", *x);
	printf("Conteudo da variavel comum y: %d\n", y);
	printf("Endereco da variavel y: %p\n", y);



}
