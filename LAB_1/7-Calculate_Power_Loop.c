// 7-Write a program to calculate power using loop. [B]

#include <stdio.h>
int main()
{
	int n1, n2, i, ans = 1;
	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);
	for (i = 1; i <= n2; i++)
	{
		ans *= n1;
	}
	printf("Power of %d is %d", n1, ans);
	return 0;
}
