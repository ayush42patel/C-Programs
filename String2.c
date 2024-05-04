#include <stdio.h>
#include <string.h>
void join()
{
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s", str1);
}
void copy()
{
    char str1[20] = "Hello World!";
    char str2[20];
    // Copy str1 to str2
    strcpy(str2, str1);
    printf("%s", str2);
}
int main()
{
    int a;
    printf("Value of a=");
    scanf("%d",&a);
    if (a==1)
    {
        join();
    }else if (a==2)
    {
        copy();
    }
    return 0;
}
