#include "pch.h" //biblioteca
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//Crtl+shift+b - Compilar
//F5 - Executar


//Variaveis Globais
int a; //numeros inteiros
float b; //numeros reais(6 casas decimais)
double c; //numeros reais(10 casas)


int main()
{
	//Variaveis Locais
	char d; //caractere
	bool e; //booleando (True/False)


	printf("Hello World!\n\n"); // \t tabulacao \n pula linha
	printf("Mostrar um valor %i \n", 5); 
	printf("mostrando %f.2, que eh um numero real\n", 4.3);
	printf("A soma de %i e %i eh: %i \n", 99,10,99+10);
	//printf("Olha soh esse numero: %i\n\n\n"); // erro

	
	system("pause");
	return 0;
}