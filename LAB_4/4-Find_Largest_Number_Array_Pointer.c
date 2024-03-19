// 4 - Write a program to find largest element in the array using Pointer. [B]

#include <stdio.h>
int main()
{
	int n, i, max;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &n);
	int a[n], *ptr;
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	ptr = a;
	max = *ptr;
	for (i = 0; i < n; i++)
	{
		if (*(ptr + i) > max)
		{
			max = *(ptr + i);
		}
	}
	printf("Max Number is: %d", max);
	return 0;
}
