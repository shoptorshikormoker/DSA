#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    float arr[size];
    float ele;
    printf("Enter the number of elements:");
    scanf("%f", &ele);
    int i, temp;
    for ( i = 0; i < ele; i++)//array input
    {

        scanf("%f", &arr[i]);
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
        printf("%f ", arr[i]);
    }

    return 0;
}