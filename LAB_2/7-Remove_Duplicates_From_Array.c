// 7 - Write a program to remove duplicates from sorted array. [C]

#include <stdio.h>
int main()
{
    int no, i, j, temp;
    printf("Enter How Many Elements Do You Want: ");
    scanf("%d", &no);
    int a[no];
    for (i = 0; i < no; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nElements After Remove Duplication\n");
    for (i = 0; i < no; i++)
    {
        if (a[i] != a[i + 1])
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}