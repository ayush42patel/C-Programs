#include <stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("Enter any number:");
    scanf("%d",&a);

    printf("How many Digit the no is:");
    scanf("%d",&b);

    for(int i=0; i<=b; i++)
    {
        c=a%10;
        d=d+c;
        a=a/10;
    }
    printf("Sum of given digit in no is:%d",d);
    
    return 0;
}
