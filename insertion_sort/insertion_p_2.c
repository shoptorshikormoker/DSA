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
    for (int i = 1; i < ele; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key;  
    }

    // Print sorted array
    
    for (int i = 0; i < ele; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}