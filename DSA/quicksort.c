#include <stdio.h>

int pivot(int arr[], int start, int end)
{
    int piv = arr[end];
    int j = start - 1;

    for(int i = start; i < end; i++)
    {
        if(arr[i] < piv)
        {
            j++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    j++;

    int temp = arr[j];
    arr[j] = arr[end];
    arr[end] = temp;

    return j;
}

void partition(int arr[], int start, int end)
{
    if(start >= end)
        return;

    int piindex = pivot(arr, start, end);

    // Left side
    partition(arr, start, piindex - 1);

    // Right side
    partition(arr, piindex + 1, end);
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 1, 3};
    int len = 5;

    printf("Before Sorting : ");
    display(arr, len);

    partition(arr, 0, len - 1);

    printf("\nAfter Sorting : ");
    display(arr, len);

    return 0;
}