#include "pch.h"
#include <iostream>
#include <stdio.h>



int main()
{
	int O;
	float N1, N2, N3;

inicio: printf("Escolha uma opcao:\n1: Media aritmetica.\n2: Media Ponderada.\n3: Media Harmonica.\n");
	scanf_s("%i", &O);
	system("cls");
	switch (O)
	{
	case 1:
		printf("Informe a primeira nota:\n");
		scanf_s("%f", &N1);
		system("cls");
		printf("Informe a segunda nota:\n");
		scanf_s("%f", &N2);
		system("cls");
		printf("Informe a terceira nota:\n");
		scanf_s("%f", &N3);
		system("cls");
		printf("Media Aritmetica: %.1f\n", ((N1 + N2 + N3) / 3));
		system("pause");
		system("cls");
		goto inicio;

	case 2:
		printf("Informe a primeira nota:\n");
		scanf_s("%f", &N1);
		system("cls");
		printf("Informe a segunda nota:\n");
		scanf_s("%f", &N2);
		system("cls");
		printf("Informe a terceira nota:\n");
		scanf_s("%f", &N3);
		system("cls");
		printf("Media Ponderada: %.1f\n", ((N1 + N2 + N3) / (3 + 3 + 4)));
		system("pause");
		system("cls");
		goto inicio;

	case 3:
		printf("Informe a primeira nota:\n");
		scanf_s("%f", &N1);
		system("cls");
		printf("Informe a segunda nota:\n");
		scanf_s("%f", &N2);
		system("cls");
		printf("Informe a terceira nota:\n");
		scanf_s("%f", &N3);
		system("cls");
		printf("Media Harmonica: %.1f\n", 3 / (1 / N1 + 1 / N2 + 1 / N3));
		system("pause");
		system("cls");
		goto inicio;

	default:
		printf("Valor invalido!\n");
		system("pause");
		system("cls");
		goto inicio;
	}
}
/*Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja
calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida
pelo usuário e calcule a média.
1 -aritmética
2 -ponderada (3,3,4)
3 -harmônica*/