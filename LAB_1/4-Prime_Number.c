// 4-Write a program to check whether a number is prime or not. [A]

#include <stdio.h>
int main()
{
	int no, i, flag = 0;
	printf("Enter Number: ");
	scanf("%d", &no);
	for (i = 2; i < no; i++)
	{
		if (no % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("%d is a Prime Number", no);
	}
	else
	{
		printf("%d is not a Prime Number", no);
	}
	return 0;
}
