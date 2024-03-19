// 5 - Read n numbers in an array and print it in ascending order. [B]

#include <stdio.h>
int main()
{
	int no, i, j, temp;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &no);
	int a[no];
	for (i = 0; i < no; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("\nOriginal Array: \n");
	for (i = 0; i < no; i++)
	{
		printf("%d ", a[i]);
	}
	for (i = 0; i < no; i++)
	{
		for (j = i + 1; j < no; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nArray Elements After Sorting: \n");
	for (i = 0; i < no; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
