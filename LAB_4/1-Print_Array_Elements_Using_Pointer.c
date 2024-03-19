// 1 - Read n numbers in an array and print it using pointer. [A]

#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &n);
	int a[n], *ptr;
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	ptr = &a[0];
	printf("\nArray Elements Are::\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	return 0;
}
