#include <stdio.h>
#include <math.h>
int power(int c,int v){
    int t;
    t=pow(c,v);
    printf("The %d to the power %d is=%d",c,v,t);
}
int main(){
    int b,e;
    printf("Enter no:");
    scanf("%d",&b);
    printf("Which Power?:");
    scanf("%d",&e);
    power(b,e);
    return 0;
}
