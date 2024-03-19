// 5 - Write a program to check if the string is a palindrome or not using Pointer. [C]

#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100], s2[100];
	char *ptr1, *ptr2;
	int ip = 1;
	printf("Enter String: ");
	gets(s1);
	ptr1 = s1 + strlen(s1) - 1;
	ptr2 = s2;
	while (ptr1 >= s1)
	{
		*ptr2 = *ptr1;
		ptr2++;
		ptr1--;
	}
	*ptr2 = '\0';
	if (strcmp(s1, s2) != 0)
	{
		ip = 0;
	}
	if (ip == 1)
	{
		printf("Entered String is a Palindrome");
	}
	else
	{
		printf("Entered String is not a Palindrome");
	}
	return 0;
}
