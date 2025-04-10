/*
Declare an Array, size will be dynamic. Take the elements
from the user and sort the array in ascending order using
Bubble sort.
*/
#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int ele;
    printf("Enter the number of elements:");
    scanf("%d", &ele);
    int i, temp;
    for ( i = 0; i < ele; i++)//array input
    {

        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ele - 1; i++) // pass
    {
        for (int j = 0; j < ele - i - 1; j++) // compare
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display new array
    printf("Sorted array: ");
    for (i = 0; i < ele; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}