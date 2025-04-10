#include <stdio.h>

int main() {
    int size,ele, i, j, max_idx;
    float temp;
    scanf("%d", &size);
    float arr[size]; 

    printf("Enter number of float elements: ");
    scanf("%d", &ele);

    if (ele > size) {
        printf("Maximum allowed size is 100.\n");
        return 1;
    }


   
    for(i = 0; i < ele; i++) {
        scanf("%f", &arr[i]);
    }

   
    for(i = 0; i < ele-1; i++) {
        max_idx = i;
        for(j = i+1; j < ele; j++) {
            if(arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }

    
    printf("Sorted float array (descending): ");
    for(i = 0; i < ele; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}