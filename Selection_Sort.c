#include <stdio.h>
int selectionsort(int a[],int n){
    int i,j,small,temp;
    for (i = 0; i < n-1; i++){
        small=i;
        for (j = i+1; j < n; j++){
            if (a[j] < a[small]){
                small = j;
            }
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
}
int main(){
    int x,i;
    printf("No of elements of array:");
    scanf("%d",&x);
    int c[x];
    printf("Elements of array:");
    for (i = 0; i < x; i++){
        scanf("%d",&c[i]);
    }
    printf("Before sorting:");
    for (i = 0; i < x; i++){
        printf("%d\t",c[i]);
    }
    printf("\n");
    selectionsort(c,x);
    printf("After sorting:");
    for (i = 0; i < x; i++){
        printf("%d\t",c[i]);
    }
    return 0;
}
