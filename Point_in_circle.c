#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,x,y,r,m,n,o,p;
    printf("Coordinate of Centre=");
    scanf("%f%f",&x1,&y1);

    printf("Radius=");
    scanf("%f",&r);

    printf("Coordinate of point=");
    scanf("%f%f",&x,&y);
    
    m=x-x1;
    n=y-y1;
    o=(pow(m,2)+pow(n,2));
    p=sqrt(o);
    if (p<r){
        printf("Point(%.2f,%.2f) lies inside the circle",x,y);
    }else{
        printf("Point(%.2f,%.2f) lies outside the circle",x,y);
    }
    return 0;
}
