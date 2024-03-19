// 5-Write a program to find GCD using loop. [B]

#include <stdio.h>
int main()
{
	int n1, n2, i, n, gcd;
	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);
	if (n1 > n2)
	{
		n = n1;
	}
	else
	{
		n = n2;
	}
	n1 = n1 > 0 ? n1 : -n1;
	n2 = n2 > 0 ? n2 : -n2;
	for (i = 1; i <= n; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}
	printf("GCD of %d and %d is %d", n1, n2, gcd);
	return 0;
}
