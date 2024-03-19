#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, n1, *ptr, i, sum = 0;
	printf("Enter the Size: ");
	scanf("%d", &n);
	//	ptr=(int *)malloc(n*sizeof(int));
	ptr = (int *)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", (i + 1));
		scanf("%d", &ptr[i]);
		sum += ptr[i];
	}
	//	printf("\nArray Elements Are\n");
	//	for(i=0;i<n;i++)
	//	{
	//		printf("%d\t",ptr[i]);
	//	}
	printf("\n\nEnter the Size: ");
	scanf("%d", &n1);
	ptr = realloc(ptr, n1 * sizeof(int));
	for (i = n; i < n1; i++)
	{
		printf("Enter Element %d: ", (i + 1));
		scanf("%d", &ptr[i]);
		sum += ptr[i];
	}
	for (i = 0; i < n1; i++)
	{
		printf("%d\t", ptr[i]);
	}
	printf("\n\nSum %d", sum);
	free(ptr);
	return 0;
}
