#include "pch.h"
#include <stdio.h>

int main() {
	int c, x, y;

	printf("\nEntre com um valor de 2 a 20: ");
	scanf_s("%d", &x);

	for (c = 1; c <= x; c++) {
		for (y = 1; y <= c; y++)
			printf("%d", y);
		printf("\n");
	}

	for (c = c - 2; c > 0; c--) {
		for (y = 1; y <= c; y++)
			printf("%d", y);
		printf("\n");
	}

	printf("\n");
	return 0;
}
/*Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
4S
aida do programa:
11
2
123
1234
123
12
1*/