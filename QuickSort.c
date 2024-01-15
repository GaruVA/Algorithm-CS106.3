#include <stdio.h>

void swap(int arr[], int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    int pIndex = p;

    for (int i = p; i < r; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr, pIndex, i);
            pIndex++;
        }
    }

    swap(arr, pIndex, r);
    return pIndex;
}

void quickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p, r);
        quickSort(arr, p, (q - 1));
        quickSort(arr, (q + 1), r);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
