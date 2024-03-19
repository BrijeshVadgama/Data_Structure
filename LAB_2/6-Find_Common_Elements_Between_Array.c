// 6 - Write a program to find common elements between two arrays. [C]

#include <stdio.h>
int main()
{
	int no1, no2, i, j;
	//	For 1st Array
	printf("Enter How Many Elemets Do You Want in 1st Array: ");
	scanf("%d", &no1);
	int a1[no1];
	for (i = 0; i < no1; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &a1[i]);
	}
	//	For 2nd Array
	printf("\nEnter How Many Elemets Do You Want in 2st Array: ");
	scanf("%d", &no2);
	int a2[no2];
	for (i = 0; i < no2; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &a2[i]);
	}
	//	Common Array Elements
	printf("\nCommon Array Elements Are :: \n");
	for (i = 0; i < no1; i++)
	{
		for (j = 0; j < no2; j++)
		{
			if (a1[i] == a2[j])
			{
				printf("%d ", a1[i]);
			}
		}
	}
	return 0;
}
