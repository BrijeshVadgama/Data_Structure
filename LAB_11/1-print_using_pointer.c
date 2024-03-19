#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter Number: ");
	scanf("%d", &n);
	int n1[n], *ptr;
	ptr = &n1[0];
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", (i + 1));
		scanf("%d", ptr + i);
	}
	printf("\nArray Elements Are\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	return 0;
}
