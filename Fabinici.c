#include <stdio.h>
void recursion(int n) {
    int n1 = 0, n2 = 1, n3;
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d\t",n3);
        recursion(n - 1);
    }
}

int main() {
    int n,i,c;
    printf("Enter option:");
    scanf("%d",&i);
    printf("The no till you want the series:");
    scanf("%d",&n);
    
    if(i==1){
        printf("Fibonacci Series Through Recursion:");
        printf("%d\t%d\t", 0, 1);
        recursion(n - 2);
    }else if (i==2){
        printf("Fibonacci Series Through Simple:");
        int a=0,b=0,x;
        if (b==0){
            printf("%d\t",a);
            b=b+1;
            printf("%d\t",b);
            for(int i = 0; i < n-2; i++){
                x=a+b;
                printf("%d\t",x);
                a=b;
                b=x;
        }
    }
}
    return 0;
}
