// 9-Write a program to display prime numbers between two intervals. [C]

#include <stdio.h>
int main()
{
	int n1, n2, i, j, flag;
	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);
	for (i = n1; i <= n2; i++)
	{
		flag = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
