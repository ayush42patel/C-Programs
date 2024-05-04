#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
void Triangle(){
    int w;
    printf("Triangle Options\n");
    printf("1.Simple Method\n");
    printf("2.Heron's Formula\n");
    printf("Exit\n");
    printf("Enter options:");
    scanf("%d",&w);
    if(w==1){
        printf("Using Simple method\n");
        float h,p,b,Area=1;
        printf("Enter Height:");
        scanf("%f",&h);
        printf("Enter Perpendicular:");
        scanf("%f",&p);
        printf("Enter Base:");
        scanf("%f",&b);
        if(h*h==(p*p+b*b)){
            Area=(0.5*b*h);
            printf("Area of Triangle by general method is:%.2f\n",Area);
        }else{
            printf("Please check the value entered.\n");
            printf("Enter according to pythagorous theorem.");
            exit(1);
        }
    }else if(w==2){
        printf("Using Heron's Formula\n");
        float side1,side2,side3,s,k,Area;
        printf("Side1:");
        scanf("%f",&side1);
        printf("Side2:");
        scanf("%f",&side2);
        printf("Side3:");
        scanf("%f",&side3);
        s=(side1+side2+side3);
        k=(s*(s-side1)*(s-side2)*(s-side3));
        Area=sqrt(k);
        printf("Area of Triangle by Heron's formula is:%.2f\n",Area);
    }
}
void Quadrilateral(){
    float a,b,c,d,Area;
    printf("Enter A:");
    scanf("%f",&a);
    printf("Enter B:");
    scanf("%f",&b);
    printf("Enter C:");
    scanf("%f",&c);
    printf("Enter D:");
    scanf("%f",&d);
    if(a==b && b==c && c==d && a==d){
        float p,l;
        printf("Enter angle between sides:");
        scanf("%f",&l);
        if(l==90){
            Area=a*a;
            p=a+b+c+d;
            printf("The Area of the Square:%.2f\n",Area);
            printf("The Parameter of the Square:%.2f\n",p);
        }else{
            float d1,d2;
            printf("Enter diagonal 1:");
            scanf("%f",&d1);
            printf("Enter diagonal 2:");
            scanf("%f",&d2);
            Area=0.5*d1*d2;
            p=a+b+c+d;
            printf("The Area of Rhombus:%.2f\n",Area);
            printf("The Perimeter of Rhombus:%.2f\n",p);
        }
    }else if(a==c && b==d){
        float p,l;
        printf("Enter angle between sides:");
        scanf("%f",&l);
        if(l==90){
            Area=a*b;
            p=a+b+c+d;
            printf("The Area of Rectangle:%.2f\n",Area);
            printf("The Perimeter of Rectangle:%.2f\n",p);
        }else{
            float h;
            printf("Enter Height");
            scanf("%f",&h);
            Area=b*h;
            p=a+b+c+d;
            printf("The Area of Parellelogram:%.2f\n",Area);
            printf("The Perimeter of Parallelogram:%.2f\n",p);
        }
    }else if(a==b && c==d || a==d && b==c){
        float d1,d2;
        float p;
        printf("Enter Diagonal 1:");
        scanf("%f",&d1);
        printf("Enter Diagonal 2:");
        scanf("%f",&d2);
        Area=d1*d2*2;
        p=(2*a+2*c);
        printf("The Area of kite:%.2f\n",Area);
        printf("The Perimeter of kite:%.2f\n",p);
    }else if(a!=b && b!=c && c!=d && a!=d){
        float d1,d2,h1,h2;
        float p;
        printf("Diagonal 1:");
        scanf("%f",&d1);
        printf("Diagonal 2:");
        scanf("%f",&d2);
        printf("The Perpendicular length drawn from vertices 1:");
        scanf("%f",&h1);
        printf("The Perpendicular length drawn from vertices 2:");
        scanf("%f",&h2);
        Area=0.5*(d1*(h1-h2));
        p=(a*b)+(b*c)+(c*d)+(d*a);
        printf("The Area of quadrilateral:%.2f\n",Area);
        printf("The Perimeter of the quadrilateral:%.2f\n",p);
    }
}
void circle(){
    float Area,r,cir;
    printf("Radius of circle:");
    scanf("%f",&r);
    Area=PI*r*r;
    cir=2*PI*r;
    printf("The Area of the circle is:%.2f\n",Area);
    printf("The circumference of the circle is:%.2f\n",cir);
}
int main(){
    while(true){
        int ch;
        printf("Options\n");
        printf("1.Triangle\n");
        printf("2.Quadrilateral\n");
        printf("3.Circle\n");
        printf("Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        if(ch==1){
            Triangle();
        }else if(ch==2){
            Quadrilateral();
        }else if(ch==3){
            circle();
        }else{
            printf("Please Enter correct option");
            exit(1);
        }
    }
    return 0;
}