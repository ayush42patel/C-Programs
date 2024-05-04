#include <stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter no of elements you want:");
    scanf("%d",&a);
    int b[a];
    for (i = 0; i < a; i++){
        printf("The %d th of the element is=",i);
        scanf("%d",&b[i]);
    }   
    for (i = 0; i < a; i++){
        sum=sum+b[i];
    }
    printf("Sum of all elements of the array=%d",sum);
    return 0;
}
