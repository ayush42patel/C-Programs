#include <stdio.h>
int gcd(int n1,int n2){
    if (n1==0){
        return n2;
    }else if(n2==0){
        return n1;
    }else if (n1==n2){
        return n1;
    }else if (n1>n2){
        return gcd(n1-n2,n2);
    }else if (n2>n1){
        return gcd(n2-n1,n1);
    }
}
int main(){
    int n1,n2,c=1;
    printf("Enter first no:");
    scanf("%d",&n1);
    printf("Enter second no:");
    scanf("%d",&n2);
    c=gcd(n1,n2);
    printf("HCF of %d and %d is =%d",n1,n2,c);
    return 0;
}