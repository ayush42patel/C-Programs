#include <stdio.h>
#include <string.h>
// No space for counting//
void first()
{
    char str[]="Ayush Patel from ds is here";
    int len;
    //printf("Enter the String : ");
    //scanf("%s",str);
    //len = strlen(str);
    printf("Length of the given string is %d",strlen(str));
}
void second()
{
    char Str[1000];
    int i;
  
    printf("Enter the String: ");
    scanf("%s", Str);
  
    for (i = 0; Str[i] != '\0'; ++i);
  
    printf("Length of Str is %d", i);
}
void third()
{
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetings2));
}
int main()
{
    int a;
    printf("A=");
    scanf("%d",&a);
    if (a==1)
    {
        first();
    }else if (a==2)
    {
        second();
    }else if (a==3)
    {
        third();
    }
       
    return 0;
}
