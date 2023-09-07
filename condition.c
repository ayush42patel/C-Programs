#include <stdio.h>
int main()
{
    int a;
    printf("Nummber=");
    scanf("%d",&a);
    if(a>0){
        printf("The no is positive");
    }else if (a<0){
        printf("The no is negative");
    }else
    {
        printf("The no is zero");
    }
    return 0;
}
