// 3 - insertion sort

#include<stdio.h>
int main()
{
	int i,j,n,key;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter Array Elements: \n");
	printf("----------------------\n");
	for (i=0;i<n;i++)
	{
		printf("Enter Element %d: ",(i+1);
		scanf("%d", &a[i]);
	}
	i=1;
	while(i<n)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
		i=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
