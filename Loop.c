#include <stdio.h>
int main()
{
    int i,u;
    printf("Value of i=");
    scanf("%d",&i);
    printf("value of u=");
    scanf("%d",&u);
    for (i; i < u; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}
