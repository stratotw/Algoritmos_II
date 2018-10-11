#include "pch.h" //biblioteca
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

//Crtl+shift+b - Compilar
//F5 - Executar (debug)
//BreakPoint (F9) - mostra no cmd exatamente onde está a linha informada.
//passo a passo sem detalhes (F10)
//passo a passo com detalhes (F11)


//Variaveis Globais
int a; //numeros inteiros
float b; //numeros reais(6 casas decimais)
double c; //numeros reais(10 casas)


int main()
{
	//Variaveis Locais
	//char -> caractere
	//bool -> booleando -> (True/False)


	printf("Hello World!\n\n"); // \t -> tabulacao \n -> pula linha
	printf("Mostrar um valor %i \n", 5); 
	printf("mostrando %f.2, que eh um numero real\n", 4.3);
	printf("A soma de %i e %i eh: %i \n", 99,10,99+10);
	//printf("Olha soh esse numero: %i\n\n\n"); // erro

	int f;
	f = 8;
	a = f * 2;

	printf("O resultado da multiplicacao de %i por 2 eh: %i\n", f, a);
	scanf_s("%i", &a); // & -> salva no endereço da variavel
	printf("\n\nValor digitado foi: %i\n\n", a); 
	
	printf("Digite um valor real: \n\n");
	scanf_s("%f", &b);

	printf("Voce digito: %.2f\n\n", b); // %.2f -> mostra 2 numeros depois da virgula.

	system("pause"); 

	return 0;
}