// 2 - Write a program to find the largest element in an array. [A]

#include <stdio.h>
int main()
{
	int no, i, max;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &no);
	int array[no];
	for (i = 0; i < no; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	max = array[0];
	for (i = 0; i < no; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	printf("The Largest Elements of Array is : %d", max);
	return 0;
}
