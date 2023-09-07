#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("No whose Table you want:");
    scanf("%d",&a);
    printf("Table you want till:");
    scanf("%d",&b);
    for (d=1;d<=b;d++)
    {
        c=a*d;
        printf("Table of %d * %d=%d\n",a,d,c);
    }
    return 0;
    
}