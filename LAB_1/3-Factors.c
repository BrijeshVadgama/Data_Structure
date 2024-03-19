// 3-Write a program to ..nd factors of a given number. [A]

#include <stdio.h>
int main()
{
	int no, i;
	printf("Enter Number to Find Factors: ");
	scanf("%d", &no);
	for (i = 1; i <= no; i++)
	{
		if (no % i == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
