#include "pch.h"
#include <iostream>

int main()
{
	int salario = 0, filho = 0, cem, cont1 = 0, cont2 = 0, M_salario = 0;
	float  m_filho = 0, m_salario = 0, perc_sal;

		while (salario >= 0) {
			printf("Informe seu salario: ");
			scanf_s("%i", &salario);
			m_salario = m_salario + salario;
			system("cls");
				if (salario > 0) {
					printf("Informe o numero de filhos: ");
					scanf_s("%i", &filho);
					m_filho += filho;
					cont1++;
					system("cls");
					if (salario > M_salario) {
						M_salario = salario;
					}
					if (salario <= 100) {
						cont2++;
					}
				}
		}
	system("cls");
	printf("Media salarial: %.2f\n", (m_salario /= cont1));
	printf("Media de filhos: %.1f\n", (m_filho /= cont1));
	printf("Maior Salario: %i\n", M_salario);
	printf("Percentual de pessoas com salario ate 100 reais: %i por cento.\n",((cont2 * 100) / cont1) );
}

/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
	● a) média do salário da população;
	● b) média do número de filhos;
	● c) maior salário;
	● d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o
comando WHILE)*/
