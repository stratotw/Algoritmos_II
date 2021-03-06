#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

void vetor(char* string, int* posicoes, int* numDeLetras, char letra) {

	for (int i = 0; i < 100; i++) {
		if (string[i] == letra) {
			posicoes[*numDeLetras] = i;
			(*numDeLetras)++;
		}

		if (string[i] == '\n') {
			break;
		}
	}
}

int main() {

	char frase[100], letra;
	int posicoes[100], qnt = 0;

	printf("Digite uma frase: ");
	for (int i = 0; i < 100; i++) {
		scanf_s("%c", &frase[i]);

		if (frase[i] == '\n') {
			break;
		}
	}

	printf("Digite uma letra: ");
	scanf_s("%c", &letra);

	vetor(frase, posicoes, &qnt, letra);

	printf("Total de letras encontradas na frase: %d\n", qnt);
	printf("Posicao de cada letra na frase: ");
	for (int i = 0; i < qnt; i++) {
		printf("%d ", posicoes[i]);
	}
	printf("\n");
}

/*Faça uma função que leia uma string(vetor char) e retorne a posição(índice) de um
caracter dentro dessa string.*/