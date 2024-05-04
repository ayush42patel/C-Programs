#include <stdio.h>
int linearsearch(int a[], int size, int t) {
    for (int i = 0; i < size; i++){
        if (a[i] == t) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n,t,r;
    printf("Enter no of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Elements of array=");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter No you want to search:");
    scanf("%d",&t);
    r=linearsearch(a,n,t);
    if (r!=-1){
        printf("Element found at index %d\n",r);
    }else{
        printf("Element not found\n");
    }
    return 0;
}