// Heap_Sort

#include <stdio.h>

void HeapSort(int arr[], int n)
{
    int i, temp;
    BuildMaxHeap(arr, n);

    for (i = n - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        Heapify(arr, i, 0);
    }
}

void BuildMaxHeap(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
    {
        Heapify(arr, n, i);
    }
}

void Heapify(int arr[], int n, int j)
{
    int max, left_child, right_child, temp;
    max = j;
    left_child = (2 * j) + 1;
    right_child = (2 * j) + 2;
    if (left_child < n && arr[left_child] > arr[max])
    {
        max = left_child;
    }
    if (right_child < n && arr[right_child] > arr[max])
    {
        max = right_child;
    }
    if (max != j)
    {
        temp = arr[max];
        arr[max] = arr[j];
        arr[j] = temp;
        Heapify(arr, n, max);
    }
}

void print_array(int arr[], int n)
{
    int i;
    printf("\nArray Element: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n, i;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter Array Elements: \n");
    printf("----------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    HeapSort(arr, n);
    print_array(arr, n);
    return 0;
}