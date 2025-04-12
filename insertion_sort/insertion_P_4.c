#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    float arr[size];
    float ele;
    printf("Enter the number of elements:");
    scanf("%f", &ele);
    int i;
    for ( i = 0; i < ele; i++)
    {

        scanf("%f", &arr[i]);
    }

    // Insertion Sort - Ascending Order
    for ( i = 1; i < ele; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

  
    for ( i = 0; i < ele; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
