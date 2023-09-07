#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,j;
    double d,e,root1,root2,imagpart,realpart;
    printf("Coefficient of x^2 (a)=");
    scanf("%f",&a);
    printf("Coefficient of x (b)=");
    scanf("%f",&b);
    printf("Constant (c)=");
    scanf("%f",&c);

    if (a==0){
        printf("Invalid Not a quadratic equation");
    }else{
        d=(b*b-4*a*c);
        e=sqrt(d);
        if (d>0)
        {
            printf("Root are Real:\n");
            root1=(-b+e)/(2*a);
            root2=(-b-e)/(2*a);
            printf("Root 1=%lf",root1);
            printf("\nRoot 2=%lf",root2);
        }else if (d<0)
        {
            if (a<0){
                j=a*-1;
                realpart=(-b)/(2*j);
                imagpart=sqrt(-d)/(2*j);
                printf("Roots are Imaginary:\n");
                printf("Root 1= %lf-%lf*i",realpart,imagpart);
                printf("\nRoot 2= %lf+%lf*i",realpart,imagpart);
            }else{
                realpart=(-b)/(2*a);
                imagpart=sqrt(-d)/(2*a);
                printf("Roots are Imaginary:\n");
                printf("Root 1= %lf-%lf*i",realpart,imagpart);
                printf("\nRoot 2= %lf+%lf*i",realpart,imagpart);
            }
        }else if (d==0)
        {
            printf("Roots are Equal:\n");
            root1=root2=(-b)/2*a;
            printf("Root 1=%lf",root1);
            printf("Root 2=%lf",root2);
        }
    }
    return 0;
}