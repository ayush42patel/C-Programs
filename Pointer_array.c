#include <stdio.h>

int arraySum(int *arr, int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    
    return sum;
}

int main(){
    int n;
    printf("Enter Size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=arraySum(arr,size);
    printf("Sum of array:%d\n",sum);
    return 0;
}