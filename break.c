#include <stdio.h>
int main()
{
    int i;
    printf("Value of i=");
    scanf("%d",&i);
    for (i; i < 8; i++){
        if (i==5){
            continue;    
        }
        printf("Hello:%d\n",i);
    }
    
    return 0;
}
