#include <stdio.h>
int factorial(int k){
    if (k==0){
        return 1;
    }else{
        return(k*factorial(k-1));
        return 0;
    }    
}
int main()
{
    int fac,n;
    printf("Enter no whose fact you want:");
    scanf("%d",&n);
    fac=factorial(n);
    printf("Factorial of %d is=%d",n,fac);
    return 0;
}
