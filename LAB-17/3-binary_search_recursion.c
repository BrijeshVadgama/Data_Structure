// 3 - implementation of binary search using recursion

#include <stdio.h>
int binary_search(int a[], int low, int high, int key)
{
	int mid;
	if (low <= high)
	{
		mid = (low + high) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid] < key)
		{
			return binary_search(a, mid + 1, high, key);
		}
		else
		{
			return binary_search(a, low, mid - 1, key);
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
	ans = binary_search(arr, 0, n, key);
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
