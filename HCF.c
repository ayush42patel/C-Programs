#include <stdio.h>
int main(){
    int n1,n2,n3,i,c;
    printf("Enter a no1:");
    scanf("%d",&n1);
    printf("Enter a no2:");
    scanf("%d",&n3);
    if(n2>n1 && n3>n1){
        for (i = 1; i <=n1; i++){
            if (n1%i==0 && n2%i==0 && n3%i==0){
                c=i;
            }
            
        }
    }printf("HCF of %d,%d and is=%d",n1,n2,n3,c);
    return 0;
}
