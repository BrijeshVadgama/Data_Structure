// 4 - Write a program to copy all the elements of one array to another array. [B]

#include <stdio.h>
int main()
{
	int no, i;
	printf("Enter How Many Elements Do You Want: ");
	scanf("%d", &no);
	int a1[no], a2[no];
	for (i = 0; i < no; i++)
	{
		printf("Enter Number %d: ", i + 1);
		scanf("%d", &a1[i]);
	}
	//	First Array Elements
	printf("\nThe Element of Original Array is:: \n");
	for (i = 0; i < no; i++)
	{
		printf("%d ", a1[i]);
	}
	//	copy element in second array
	for (i = 0; i < no; i++)
	{
		a2[i] = a1[i];
	}
	//	Second Array Elements
	printf("\nThe Element After Copied Array is:: \n");
	for (i = 0; i < no; i++)
	{
		printf("%d ", a2[i]);
	}
	return 0;
}
