// 2 - Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third matrix and print it.

#include <stdio.h>
int main()
{
	int matrix1[3][2], matrix2[2][3], resultMatrix[3][3], i, j, k;
	// Matrix 1
	printf("Enter Element Of Matrix1::\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter Element a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	// Matrix 2
	printf("\nEnter Element Of Matrix2::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter Element b%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	// Multiplication
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			resultMatrix[i][j] = 0;
			for (k = 0; k < 2; k++)
			{
				resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	printf("\nMultiplication Of Matrix1 & Matrix2::\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", resultMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
