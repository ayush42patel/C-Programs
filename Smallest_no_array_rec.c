#include <stdio.h>
int small(int a[],int n){
    if(n==1){
        return a[0];
    }
    int s=small(a,n-1);
    if (a[n-1]<s){
        s=a[n-1];
    }
    return s;
}
int main() {
    int n;
    printf("No of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Elements of array=");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("The Smallest no in the array is=%d",small(a,n));
    return 0;
}