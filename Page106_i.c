#include <stdio.h>
#include <math.h>
int main(){
    int i,j,sp,r,t=1;
    printf("Rows=");
    scanf("%d",&r);
    for (i = 1; i <=r; i++){
        for (int k = 0; k <=(r-i); k++){
            printf(" ");
        }
        
        for (j = 1; j <=i; j++,t++){
            printf("%d ",t);
        }
        printf("\n");
    }
    return 0;
}
