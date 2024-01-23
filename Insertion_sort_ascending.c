#include <stdio.h>
#include <stdlib.h>
int insertionsort(int a[],int n){
    int i,key,j;
    for (i = 0; i < n; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    for (i = 0; i < n; i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int b,x;
    printf("No of Elements of array:");
    scanf("%d",&b);
    int c[b];
    printf("Elements of array:");
    for (int i = 0; i < b; i++){
        scanf("%d",&c[i]);   
    }

    printf("Inserted array:\n");
    for(int j=0;j<b;j++){
        printf("%d\t",c[j]);
    }
    printf("\n");

    printf("Sorted array:\n");
    insertionsort(c,b);
    return 0;
}
