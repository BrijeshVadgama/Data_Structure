// 3 - Write a program to find transpose of a square matrix. [C]

#include <stdio.h>
int main()
{
	int matrix[2][2], transposeMatrix[2][2], i, j;
	printf("Enter Element Of Matrix::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter Element a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			transposeMatrix[j][i] = matrix[i][j];
		}
	}
	printf("\nOriginal Matrix::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose Of Matrix::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", transposeMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
