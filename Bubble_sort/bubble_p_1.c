/*
2, 9, 1, 44, 109, 44; sort these elements using Bubble
sort.
*/
#include <stdio.h>

int main()
{
    int arr[] = {2, 9, 1, 44, 109, 44};
    int ele = sizeof(arr) / sizeof(arr[0]); // Calculates the number of elements
    int i, j, temp;

    for (i = 0; i < ele- 1; i++) // pass
    {
        for (j = 0; j < ele - i - 1; j++) // compare
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array: ");
    for (i = 0; i < ele; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}