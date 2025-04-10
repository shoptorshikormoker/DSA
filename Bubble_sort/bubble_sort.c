#include <stdio.h>

int main() {
    int n, tem;
    scanf("%d", &n);
    int arr[n];  
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j <n-1; j++)
    {
      
        for (int k = 0; k <n-1-j; k++)
        {
            if(arr[j]>arr[k+1]){
                tem=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=tem;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
