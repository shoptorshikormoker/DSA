#include <stdio.h>

int main() {
   int size, ele, i, j, min_idx;
    float temp;
    scanf("%d", &size);
    printf("Enter number of elements: ");
    scanf("%d", &ele);

    float arr[size];  

    if (ele > size) {
        printf("Maximum allowed size.\n");
        return 1;
    }
  
    for(i = 0; i < ele; i++) {
        scanf("%f", &arr[i]);
    }

    for(i = 0; i < ele-1; i++) {
        min_idx = i;
        for(j = i+1; j < ele; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

  
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < ele; i++) {
        printf("%f ", arr[i]);
    }

    return 0;
}
