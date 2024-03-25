// 1 - implementation of linear search

#include <stdio.h>
int linear(int a[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n, i, key, ans;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter Array Elements: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter Key: ");
	scanf("%d", &key);
	ans = linear(arr, n, key);
	if (ans == -1)
	{
		printf("Element Not Fount.!");
	}
	else
	{
		printf("Element is Found at %d", ans);
	}
	return 0;
}
