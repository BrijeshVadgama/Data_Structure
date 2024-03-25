// 1 - selection sort

#include <stdio.h>
int main()
{
	int n, i, j, min_index, temp;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter Array Elements: \n");
	printf("----------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", (i + 1));
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
	printf("\nArray Elements After Sorting\n");
	printf("----------------------------\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
