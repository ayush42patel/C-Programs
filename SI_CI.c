#include <stdio.h>
#include <math.h>

int main()
{
    float p,r,t,A,s,n,si,ci;
    printf("Principle=");
    scanf("%f",&p);
    printf("Rate=");
    scanf("%f",&r);
    printf("Time=");
    scanf("%f",&t);
    printf("No of times interest is Compounded per year=");
    scanf("%f",&n);
    si=(p*t*r)/100;
    printf("Simple Interest=%f\n",si);
    s=pow(1+(r/100),t);
    A=p*s;
    ci=A-p;
    printf("Compound interest=%f",ci);
    return 0;
}
