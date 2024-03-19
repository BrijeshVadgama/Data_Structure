// 4 - Merge_Sort

#include <stdio.h>

void mergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, m, h);
    }
}

void merge(int a[], int l, int m, int high)
{
    int b[10], h, i, j, k;
    h = l;
    i = l;
    j = m + 1;
    while (h <= m && j <= high)
    {
        if (a[h] < a[j])
        {
            b[i] = a[h];
            h = h + 1;
        }
        else
        {
            b[i] = a[j];
            j = j + 1;
        }
        i = i + 1;
    }
    while (h <= m)
    {
        b[i] = a[h];
        i = i + 1;
        h = h + 1;
    }
    while (j <= high)
    {
        b[i] = a[j];
        i = i + 1;
        j = j + 1;
    }
    for (k = l; k <= high; k++)
    {
        a[k] = b[k];
    }
}

void print_array(int a[], int n)
{
    int i;
    printf("\nArray Element: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Array Elements: \n");
    printf("----------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", (i + 1));
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
    print_array(a, n);
    return 0;
}
