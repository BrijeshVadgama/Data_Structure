//  2 - Bubble Sort

#include <stdio.h>
int main()
{
	int i, j, n, temp;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int last = n;
	int a[n];
	printf("\nEnter Array Elements: \n");
	printf("----------------------\n");
	for (i = 1; i <= n; i++)
	{
		printf("Enter Element %d: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= last - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		last = last - 1;
	}
	printf("\nArray Elements After Sorting\n");
	printf("----------------------------\n");
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
