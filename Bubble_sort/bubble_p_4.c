/*Declare a floating data type Array, size will be dynamic.
Take the elements from the user and sort the array in
descending order using Bubble sort.
*/
#include <stdio.h>

int main()
{
    int size, ele, i, j;
    scanf("%d", &size);

    float arr[size];

    printf("Enter number of float elements: ");
    scanf("%d", &ele);

    printf("Enter %d float numbers:\n", ele);
    for (i = 0; i < ele; i++)
    {
        scanf("%f", &arr[i]);
    }
    float temp;
    for (i = 0; i < ele - 1; i++) // pass
    {
        for (j = 0; j < ele - i - 1; j++) // compare
        {
            if (arr[j] < arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted float array (descending): ");
    for (i = 0; i < ele; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
