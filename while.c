#include <stdio.h>
void first() 
{
    int i = 0;

    do {
        printf("%d\n", i);
        i++;}
    while (i < 5);
}
//2nd
void second()
{
        int j = 5;
  
    while (j < 10) {
        printf("Hello\n",j);
        j++;}
}
int main()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    if (a==1)
    {
        first();
        return 0;
    }else if (a==2)
    {
        second();
        return 0;
    }
    
}