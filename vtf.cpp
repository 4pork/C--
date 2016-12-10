#include "stdafx.h"
#include "locale.h"
#include "windows.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main()
{
	setlocale(0, "Rus");
	int i, j, k, k2, n, m, g, min;
	int z, z1, n1, m1, q;
	int mass[10][10];
	int mass2[10][10];
	int mass3[10][10];
	srand(time(NULL));

	printf("Введите размер первого массива: "); // ввод размеров заполнения массива
	scanf("%d %d", &m,&n);

	/////////////////////////////задание 1

	for (j = 0; j < m; j++)  // рандомный ввод и вывод массива
	{
		for (i = 0; i < n; i++)
		{
		g = 1 + rand() % 9;
			mass[j][i] = g;
			printf("%d ", mass[j][i]);
		}
		printf("\n");
	}
		printf("\n");

	/////////////////////////////задание 2

		k = 0;
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
				if (k < n)
				{
					int Buf = mass[0][i];
					mass[0][i] = mass[m - 1][n - (i + 1)];
					mass[m - 1][n - (i + 1)] = Buf;
				}
			printf("%d ", mass[j][i]);
			k++;
		}
		printf("\n");
	}
		printf("\n");

		/////////////////////////////задание 3

		min = mass[0][0]; // поиск минимального элимента
		k = 0;
		k2 = 0;
		for (j = 0; j < m; j++)
			for (i = 0; i < n; i++)
			{
				if (min > mass[j][i])
				{
					min = mass[j][i];
					k = j;
					k2 = i;
				}
			}

		for (j = 0; j < m ; j++) // переписывание массива
		{
			for (i = 0; i < n ; i++)
			{
				if ((j != k) && (i != k2))
				{
					mass2[j][i] = mass[j][i];
					printf("%d ", mass[j][i]);
				}

			}
			printf("\n");
		}
		z = 0;
		z1 = 0;
		for (j = 0; j < m; j++)
			for (i = 0; i < n; i++)
			{
				if (mass2[j][i] > -100)
				{
					mass2[z][z1] = mass2[j][i];
					z1++;
					if (z1 == (n - 1))
					{
						z1 = 0;
						z++;
					}
				}
			}

		/////////////////////////////задание 4

		printf("\n Введите размер второго массива: "); // ввод размеров заполнения массива
		scanf("%d %d", &n1, &q);

		for (j = 0; j < n1; j++)     // ввод массива вручную
			for (i = 0; i < q; i++)
			{
				printf("Введите значения массива: Строка %d, Столбец %d:  ", j, i);
				scanf("%d", &g);
				mass[j][i] = g;
			}

		for (j = 0; j < n1; j++)  //  вывод второго массива
		{
			for (i = 0; i < q; i++)
			{
				printf("%d ", mass[j][i]);
			}
			printf("\n");
		}
		printf("\n");

		/////////////////////////////задание 5

		if (((m - 1) == q) && ((n - 1) == n1))
		{
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < q; j++)
				{
					mass3[i][j] = 0;
					for (k = 0; k < n-1; k++)
						mass3[i][j] += (mass2[i][k] * mass[k][j]);
				}
			}


			for (j = 0; j < q; j++)  //  вывод результата
			{
				for (i = 0; i < n1; i++)
				{
					printf("%d ", mass3[j][i]);
				}
				printf("\n");
			}
			printf("\n");
		}

		else printf("Матрицы перемножить нельзя! \n");

	system("pause");
    return 0;
}

