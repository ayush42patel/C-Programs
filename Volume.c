#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.14
void cube(){
    float l,b,h,v,lsa,tsa;
    printf("Side 1:");
    scanf("%f",&l);
    printf("Side 2:");
    scanf("%f",&b);
    printf("Side 3:");
    scanf("%f",&h);
    v=l*b*h;
    lsa=4*l*l;
    tsa=6*l*l;
    printf("The Volume of the Cube:%.2f\n",v);
    printf("The Lateral Surfaces area of the Cube:%.2f\n",lsa);
    printf("The Total Surfaces area of the Cube:%.2f\n",tsa);
}
void cuboid(){
    float l,b,h,v,lsa,tsa;
    printf("Side 1:");
    scanf("%f",&l);
    printf("Side 2:");
    scanf("%f",&b);
    printf("Side 3:");
    scanf("%f",&h);
    v=l*b*h;
    lsa=2*h*(l+b);
    tsa=2*(l*b+b*h+h*l);
    printf("The Volume of the Cuboid:%.2f\n",v);
    printf("The Lateral Surfaces area of the Cuboid:%.2f\n",lsa);
    printf("The Total Surfaces area of the Cuboid:%.2f\n",tsa);
}
void cone(){
    float l,h,r,v,csa,tsa;
    printf("Height:");
    scanf("%f",&h);
    printf("Slant Height:");
    scanf("%f",&l);
    printf("Radius:");
    scanf("%f",&r);
    v=1/3*PI*(r*r)*h;
    csa=PI*r*l;
    tsa=(PI*r*l)+(PI*r*r);
    printf("Volume of the Cone:%.2f\n",v);
    printf("The Curved Surfaces area of Cone:%.2f\n",csa);
    printf("The Total Surfaces area of Cone:%.2f\n",tsa);
}
void solidcylinder(){
    float h,r,v,csa,tsa;
    printf("Height:");
    scanf("%f",&h);
    printf("Radius:");
    scanf("%f",&r);
    v=PI*(r*r)*h;
    csa=2*PI*r*h;
    tsa=2*PI*r*(h+r);
    printf("The Volume of solid cylinder:%.2f\n",v);
    printf("The Curved Surfaces area of solid cylinder:%.2f\n",csa);
    printf("The Total Surfaces area of solid cylinder:%.2f\n",tsa);
}
void hollowcylinder(){
    float R,r,h,v,csa,tsa;
    printf("Enter Radius:");
    scanf("%f",&r);
    printf("Enter Radius 2:");
    scanf("%f",&r);
    printf("Enter Height:");
    scanf("%f",&h);
    v=PI*(r*r-R*R)*h;
    csa=(2*PI*r*h)+(2*PI*R*h);
    tsa=(2*PI*r+R)*(h+r+R);
    printf("The Volume of hollow cylinder:%.2f\n",v);
    printf("The Curved Surfaces area of hollow cylinder:%.2f\n",csa);
    printf("The Total Surfaces area of hollow cylinder:%.2f\n",tsa);
}
void solidsphere(){
    float r,v,csa,tsa;
    printf("Radius:");
    scanf("%f",&r);
    v=4/3*PI*r*r*r;
    csa=4*PI*r*r;
    tsa=4*PI*r*r;
    printf("The Volume of solid sphere:%.2f\n",v);
    printf("The Curved Surfaces area of solid sphere:%.2f\n",csa);
    printf("The Total Surfaces area of solid sphere:%.2f\n",tsa);
}
void hollowsphere(){
    float R,r,v,csa,tsa;
    printf("Enter Radius:");
    scanf("%f",&r);
    printf("Enter Radius 2:");
    scanf("%f",&r);
    v=2*PI*(R*R*R-r*r*r);
    csa=3*PI*(R*R-r*r);
    tsa=2/3*PI*(R*R-r*r);
    printf("The Volume of hollow sphere:%.2f\n",v);
    printf("The Curved Surfaces area of hollow sphere:%.2f\n",csa);
    printf("The Total Surfaces area of hollow sphere:%.2f\n",tsa);
}
void hemisphere(){
    float r,v,csa,tsa;
    printf("Radius:");
    scanf("%f",&r);
    v=2*PI*(r*r);
    csa=3*PI*(r*r);
    tsa=2/3*PI*(r*r*r);
    printf("The Volume of hemisphere:%.2f\n",v);
    printf("The curved surface area of hemisphere:%2.f\n",csa);
    printf("The Total surface area of hemisphere:%.2f\n",tsa);
}
int main(){
    while(true){
        int ch;
        printf("Options\n");
        printf("1.Cube\n");
        printf("2.Cuboid\n");
        printf("3.Cone\n");
        printf("4.Solid Cylinder\n");
        printf("5.Hollow Cylinder\n");
        printf("6.Solid Sphere\n");
        printf("7.Hollow Sphere\n");
        printf("8.Hemisphere\n");
        printf("Exit\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
        if(ch==1){
            cube();
        }else if(ch==2){
            cuboid();
        }else if(ch==3){
            cone();
        }else if(ch==4){
            solidcylinder();
        }else if(ch==5){
            hollowcylinder();
        }else if(ch==6){
            solidsphere();
        }else if(ch==7){
            hollowsphere();
        }else if(ch==8){
            hemisphere();
        }else{
            exit(1);
        }
    }
}