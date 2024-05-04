#include <stdio.h>
int main()
{
    int m=42;
    int *a=&m;
    printf("Value of m=%d\n",m);
    printf("Address of variable m=%p\n",&m);
    printf("Address of pointer a=%p\n",a);
    printf("Address of pointer2 a=%p\n",*a);
}