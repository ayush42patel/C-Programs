#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Value of a=");
    scanf("%d",&a);
    printf("Value of b=");
    scanf("%d",&b);
    for (a; a <=5; a++)
    {
        printf("first:%d\n",a);
        for (b;b < 4; b++)
        {
            printf("Second:%d\n",b);
        }
        
    }
    
    return 0;
}
