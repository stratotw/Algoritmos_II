#include "pch.h"
#include <iostream>

int main()
{
	int cont = 0;
	float chico = 1.50, ze = 1.10;

	while (chico > ze) {
		chico += 0.02;
		ze += 0.03;
		cont++;
	}
	printf("Ze sera maior que chico em %i anos.", cont);
}

/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.*/