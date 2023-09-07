#include <stdio.h>
int main()
{
    int a,b,c;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("sA=%d\n",a);
    printf("sB=%d",b);
    return 0;
}

