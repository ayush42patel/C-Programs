#include <stdio.h>
void readspace()
{
    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s", fullName);
}
int main()
{
    readspace();
    return 0;
}
