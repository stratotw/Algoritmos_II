#include "pch.h"
#include <iostream>

int main()
{
	int velo, tempo;
	float  distancia, litros_usados;

	printf("Informe o tempo de viagem em minutos: ");
	scanf_s("%i", &tempo);
	printf("Informe a velocidade media por hora: ");
	scanf_s("%i", &velo);

	distancia = (tempo * velo) / 60;
	litros_usados = distancia / 12;

	system("cls");
	printf("Velocidade media: %i\nTempo de Viagem: %i\nDistancia: %.1f\nQuantidade de litros usados: %.1f", tempo, velo, distancia, litros_usados);
	   
}
/*Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de
litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS =
DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
viagem.*/
