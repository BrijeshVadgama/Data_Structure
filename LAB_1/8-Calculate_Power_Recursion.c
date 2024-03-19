// 8-Write a program to calculate power using recursion. [B]

#include <stdio.h>
int power(int n1, int n2)
{
	if (n2 == 0)
		return 1;
	else
		return n1 * power(n1, n2 - 1);
}
int main()
{
	int n1, n2, powerno;
	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);
	powerno = power(n1, n2);
	printf("Power of %d is %d", n1, powerno);
	return 0;
}
