#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    int a,b;
    float area,angle,m;
    printf("Side A of Triangle=");
    scanf("%d", &a);
    printf("Side B of Triangle=");
    scanf("%d", &b);
    printf("Angle in degrees:");
    scanf("%f", &angle);
    angle=angle*(PI/180.0);
    m=sin(angle);
    area=(a*b*0.5*m);
    printf("Area of Triangle=%f", area);
    return 0;
    
}
