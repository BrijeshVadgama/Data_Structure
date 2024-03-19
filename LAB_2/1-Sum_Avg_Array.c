// 1 - Read n numbers in an array and print their sum and average.

#include <stdio.h>
int main()
{
	int no, i, sum = 0;
	float avg;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &no);
	int numbers[no];
	for (i = 0; i < no; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &numbers[i]);
		sum += numbers[i];
	}
	printf("----------------------\n");
	avg = sum / no;
	printf("Sum: %d\n", sum);
	printf("Average: %.2f", avg);
	return 0;
}
