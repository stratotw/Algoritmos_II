#include "pch.h"
#include <iostream>

int soma(int x, int y)
{
	return x + y;
}

int subtracao(int x, int y)
{
	return x - y;
}
float divisao(float x, float y)
{
	return x / y;
}
int multiplicacao(int x, int y)
{
	return x * y;
}
int lernumerointeiro()
{
	int num_1;
	int num_2;
	printf("Digitar um numero inteiro: ");
	scanf_s("%i", &num_1);
	system("cls");
	

int main()
{ 
	int calc;
	int num_1;
	int num_2;
	float result;
	


inicio: 
	printf("Escolha:\n1. Soma.\n2. Subtracao.\n3. Divisao.\n4. Multiplicacao.\n\n");
		scanf_s("%i", &calc);
		system("cls");
	
	int primeirovalor = lernumerointeiro();
	int segundovalor = lernumerointeiro();

	int r = soma(primeirovalor, segundovalor);
	int s = subtracao(primeirovalor, segundovalor);
	float t = divisao(primeirovalor, segundovalor);
	int u = multiplicacao(primeirovalor, segundovalor);

}


