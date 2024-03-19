// 3 - Write a C program to swap two numbers, calling an UDF by value. [A]

#include <stdio.h>
void swapNumber(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("\n\nAfter Swapping A and B is :: \n");
	printf("A: %d \nB: %d", *x, *y);
}
int main()
{
	int a, b;
	printf("Enter Number 1: ");
	scanf("%d", &a);
	printf("Enter Number 2: ");
	scanf("%d", &b);
	printf("\nBefore Swapping A and B is :: \n");
	printf("A: %d \nB: %d", a, b);
	swapNumber(&a, &b);
	return 0;
}
