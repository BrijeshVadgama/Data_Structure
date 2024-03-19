// 1. Read two 2x2 matrices and perform addition of matrices into third matrix and print it. [A]

#include <stdio.h>
int main()
{
	int matrix1[2][2], matrix2[2][2], resultMatrix[2][2], i, j;
	printf("Enter Elements of Matrix 1::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter Element a%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("\nEnter Elements of Matrix 2::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter Element b%d%d: ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	printf("\nAddition Of Matrix1 & Matrix2::\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", resultMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
