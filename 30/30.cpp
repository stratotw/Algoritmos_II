#include "pch.h"
#include <stdio.h>

int main() {
	int c, j, x = 0;

	printf("Entre com um valor de 2 a 20: ");
	scanf_s("%d", &c);

	for (c = 1; c <= x; c++) {
		for (j = 1; j <= c; j++)
			if (j < c) {
				printf("X");
			}
			else {
				c = c + 1;
			}

	}
	return 0;
}
/*Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
7S
aida do programa:
1234567
x123456
xx12345
xxx1235
xxxx123
xxxxx12
xxxxxx1*/