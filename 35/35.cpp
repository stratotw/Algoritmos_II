#include "pch.h"
#include <iostream>

int main()
{
	int idade = 0, m_idade = 0, sexo, olho, cabelo, cont = 0;

	while (idade >= 0) {
		printf("Informe sua idade: ");
		scanf_s("%i", &idade);
		system("cls");
			if (idade > 0) {
				if (idade > m_idade) {
					m_idade = idade;
				}
				printf("Informe o seu sexo:\n1 -> Masculino\n2 -> Feminino\n\n-> ");
				scanf_s("%i", &sexo);
				system("cls");
				printf("Informe a cor dos olhos:\n1 -> Azul\n2 -> Verde\n3 -> Castanho\n\n->  ");
				scanf_s("%i", &olho);
				system("cls"); printf("Informe a cor do seu cabelo:\n1 -> Loiro\n2 -> Castanho\n3 -> Preto\n\n-> ");
				scanf_s("%i", &cabelo);
				system("cls");
				if (idade >= 18 && idade <= 35){
					if (sexo == 2) {
						if (olho == 2) {
							if (cabelo == 1) {
								cont++;
							}
						}
					}
				}
			}
	}
	system("cls");
	printf("Existem %i individuos do sexo feminino cuja idade esta entre 18 e 35 anos, tem olhos verdes e cabelos loiros\n\n", cont);
}

/*Foi realizada uma pesquisa de algumas características físicas da população de uma
certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados:

- idade
- sexo (masculino e feminino)
- cor dos olhos (1 - azuis, 2 - verdes ou 3 - castanhos)
- cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos)

Faça um algoritmo que determine e escreva:

- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
  inclusive e que tenham olhos verdes e cabelos louros.

O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.*/