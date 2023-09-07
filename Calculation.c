#include <stdio.h>
int add(int a, int b,int c,int d){
    return a+b+c+d;
}

int sub(int a, int b,int c,int d){
    return a-b-c-d;
}

int multiply(int a,int b,int c,int d){
    return (a*b*c*d);
}

int divide(int a,int b,int c,int d){
    return a/b/c/d;
}

int main()
{
    int x;
    printf("Menu\n");
    printf("1.add\n2.sub\n3.multiply\n4.divide\n");
    printf("Value of x:");
    scanf("%d",&x);
    if (x==1){
        int a,b,c,d;
        printf("Value of a:");
        scanf("%d",&a);
        printf("value of b:");
        scanf("%d",&b);
        printf("Value of c:");
        scanf("%d",&c);
        printf("Value of d:");
        scanf("%d",&d);
        printf("Result is=%d",add(a,b,c,d));
        return 0;
    }else if (x==2)
    {
        int a,b,c,d;
        printf("Value of a:");
        scanf("%d",&a);
        printf("value of b:");
        scanf("%d",&b);
        printf("Value of c:");
        scanf("%d",&c);
        printf("Value of d:");
        scanf("%d",&d);
        printf("Result is=%d",sub(a,b,c,d));
        return 0;
    }else if (x==3)
    {
        int a,b,c,d;
        printf("Value of a:");
        scanf("%d",&a);
        printf("value of b:");
        scanf("%d",&b);
        printf("Value of c:");
        scanf("%d",&c);
        printf("Value of d:");
        scanf("%d",&d);
        printf("Result is=%d",multiply(a,b,c,d));
        return 0;
    }else if (x==4)
    {
        int a,b,c,d;
        printf("Value of a:");
        scanf("%d",&a);
        printf("value of b:");
        scanf("%d",&b);
        printf("Value of c:");
        scanf("%d",&c);
        printf("Value of d:");
        scanf("%d",&d);
        printf("Result is=%d",divide(a,b,c,d));
        return 0;
    }
}
