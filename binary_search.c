#include <stdio.h>
int binarysearch(int a[],int x,int r){
    int m,l=0;
    while (l<=r){
        m=l+(r-l)/2;
        if(a[m]==x){
            return m;
        }else if(a[m]<x){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    return -1;
}
int main(){
    int n,q,res;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:");
    for (int i = 0; i <n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no you want to search:");
    scanf("%d",&q);
    res=binarysearch(a,q,n-1);
    if (res==-1){
        printf("Element not found");
    }else{
        printf("Element found at %d",res);
    }
    return 0;
}