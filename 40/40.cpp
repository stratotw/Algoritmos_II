#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int cod;
	int qt = 0;
	float total = 0;

	while (qt != -1)
	{
		printf("Digite a quantidade do produto: ");
		cin >> qt;

		if (qt == -1)
		{
			break;
			system("cls");

		}

		printf("1001 - Arroz \n 1324 - Feijao \n 6548 - Trigo \n 0987 - Leite \n 7623 - Farofa \nDigite o codigo do produto:  ");
		cin >> cod;

		if (cod == 1001)
		{
			total = total + qt * 5.32;
		}

		else if (cod == 1324)
		{
			total = total + qt * 6.45;
		}
		else if (cod == 6548)
		{
			total = total + qt * 2.37;
		}
		else if (cod == 987)
		{
			total = total + qt * 5.32;
		}
		else if (cod == 7623)
		{
			total = total + qt * 6.45;
		}
		else
		{
			printf("Codigo invalido \n");
		}

		system("pause");
		system("cls");
	}

	printf("Valor total e R$ %.2f \n ", total);

	system("Pause");
	return 0;
}



/*Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada
e calcular o preço total (deve receber estas informações até o usuário digitar -1 para
o código) e apresentar o total da compra, usando a tabela abaixo:
Código do produto Preço unitário
1001 5,32
1324 6,45
6548 2,37
0987 5,32
7623 6,45*/