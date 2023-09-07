#include <stdio.h>
int main()
{
    int a,i;
    printf("Value of a:");
    scanf("%d",&a);
    int J[a];
    for (i = 0; i<=a; i++)
    {
        int s;
        printf("\nNumber you want to Enter:");
        scanf("%d",&s);
        J[i]=s;
        printf("The %d the element of the array is %d",i,J[i]);
    }
    
    printf("\nAll Values of array are");
    for (int m = 0; m <=a; m++)
    {
        printf("\n%d",J[m]);
    }
    
    return 0;
}
