#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int prod, quant;
	float SO = 0, prod1 = 5.32, prod2 = 6.45, prod3 = 2.37, prod4 = 5.32, prod5 = 6.45;

inicio: printf("Digite o codigo do produto:\n\n1001= 5.32\n1324 = 6.45\n6548 = 2.37\n987 = 5.32\n7623 = 6.45\n0000 = TOTAL\n\n");
	scanf_s("%i", &prod);
	system("cls");
	switch (prod) {
	case 1001:
		printf("Quantidade: \n");
		scanf_s("%i", &quant);
		SO += (quant * prod1);
		quant = 0;
		system("cls");
		goto inicio;
	case 1324:
		printf("Quantidade: \n");
		scanf_s("%i", &quant);
		SO += (quant * prod2);
		quant = 0;
		system("cls");
		goto inicio;
	case 6548:
		printf("Quantidade: \n");
		scanf_s("%i", &quant);
		SO += (quant * prod3);
		quant = 0;
		system("cls");
		goto inicio;
	case 987:
		printf("Quantidade: \n");
		scanf_s("%i", &quant);
		SO += (quant * prod4);
		quant = 0;
		system("cls");
		goto inicio;
	case 7623:
		printf("Quantidade: \n");
		scanf_s("%i", &quant);
		SO += (quant * prod5);
		quant = 0;
		system("cls");
		goto inicio;
	case 0000:
		printf("TOTAL: %.2f\n\n\n\n\n", SO);
		break;
	default:
		printf("Numero incorreto!\n\n");
		system("pause");
		system("cls");
		goto inicio;


	}


}
/*Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada
e calcular o preço total, usando a tabela abaixo:
Código do Produto Preço unitário
1001 5,32
1324 6,45
6548 2,37
987 5,32
7623 6,45*/
