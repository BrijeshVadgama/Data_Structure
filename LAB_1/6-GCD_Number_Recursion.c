// 6-Write a program to find GCD using recursion. [B]
// GCD -- Greatest Common Divider

#include <stdio.h>
int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return gcd(n2, n1 % n2);
}
int main()
{
	int n1, n2, gcdno;
	printf("Enter Number 1: ");
	scanf("%d", &n1);
	printf("Enter Number 2: ");
	scanf("%d", &n2);
	n1 = n1 > 0 ? n1 : -n1;
	n2 = n2 > 0 ? n2 : -n2;
	gcdno = gcd(n1, n2);
	printf("GCD of %d and %d is %d", n1, n2, gcdno);
	return 0;
}
