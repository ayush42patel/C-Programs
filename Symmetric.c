#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("No of elements:");
    scanf("%d", &n);
    int a[n][n];
    printf("Element of Array=");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                printf("The mattrix is symmetric");
                break;
            }else{
                printf("The mattrix is not symmetric");
            }
        }
    }

    return 0;
}
