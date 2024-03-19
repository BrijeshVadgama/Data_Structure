// 2-Write a program to ..nd factorial of a number using recursion. [A]

#include <stdio.h>
int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int no, i, fact = 1;
	printf("Enter Number to Find Factorial: ");
	scanf("%d", &no);
	fact = factorial(no);
	printf("Factorial Of %d is %d", no, fact);
	return 0;
}
