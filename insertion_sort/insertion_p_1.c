#include <stdio.h>

int main()
{
    int arr[] = {2, 9, 1, 44, 109, 44};
    int ele = sizeof(arr) / sizeof(arr[0]);
    

    for (int i = 1; i < ele; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < ele; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}