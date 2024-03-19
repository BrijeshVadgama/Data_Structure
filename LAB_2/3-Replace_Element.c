// 3 - Read n numbers in an array then read two different numbers, replace 1st number with 2nd number in an array and print the final array. [A]

#include <stdio.h>
int main()
{
	int n, no1, no2, i, flag = 0;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &n);
	int array[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", (i + 1));
		scanf("%d", &array[i]);
	}
	printf("Enter The Number You Want to Replace: ");
	scanf("%d", &no1);
	printf("Enter The Number That You Want to Replace With: ");
	scanf("%d", &no2);
	for (i = 0; i < n; i++)
	{
		if (array[i] == no1)
		{
			array[i] = no2;
			flag = 1;
		}
	}
	if (flag == 1)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d\n", array[i]);
		}
	}
	else
	{
		printf("Sorry! The Number to Replace is Not Found");
	}
	return 0;
}
