// 1-Write a program to find factorial of a number using loop. [A]

#include <stdio.h>
int main()
{
	int no, i, fact = 1;
	printf("Enter Number to Find Factorial: ");
	scanf("%d", &no);
	for (i = no; i >= 1; i--)
	{
		fact = fact * i;
	}
	printf("Factorial Of %d is %d", no, fact);
	return 0;
}
