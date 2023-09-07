#include <stdio.h>
//We can also use the built-in string.h library function strlen() or the sizeof()//
void chardisplay()
{
    char a[]="Hello";
    printf("Value of a:%s\n",a);
}
void partdisplay()
{
    int h;
    printf("Value of h=");
    scanf("%d",&h);
    char b[]="Hello myself Ayush";
    printf("Value of b:%c",b[h]);
}
int main()
{
    chardisplay();
    partdisplay();
    return 0;
}
