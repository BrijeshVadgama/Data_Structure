// quick sort

#include <stdio.h>

void quicksort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int i = lb;
        int j = ub + 1;
        int key = a[lb];
        int flag = 1;

        while (flag)
        {
            i++;
            while (a[i] < key)
                i++;
            j--;
            while (a[j] > key)
                j--;
            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
            {
                flag = 0;
            }
        }
        int temp = a[lb];
        a[lb] = a[j];
        a[j] = temp;

        quicksort(a, lb, j - 1);
        quicksort(a, j + 1, ub);
    }
}

void print_array(int a[], int n)
{
    printf("\nArray Element: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Array Elements: \n");
    printf("----------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", (i + 1));
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    print_array(a, n);
    return 0;
}
