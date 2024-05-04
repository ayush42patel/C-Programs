#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,x3,y1,y2,y3,m,n;
    printf("Coordinate 1=");
    scanf("%f%f",&x1,&y1);
    printf("Coordinate 2=");
    scanf("%f%f",&x2,&y2);
    printf("Coordinate 3=");
    scanf("%f%f",&x3,&y3);
    m=((y2-y1)/(x2-x1));
    n=((y3-y2)/(x3-x2));
    if (m==n){
        printf("The Coordinates(%.1f,%.1f),(%.1f,%.1f) and (%.1f,%.1f) are in a straight line",x1,y1,x2,y2,x3,y3);
    }else{
        printf("The Coordinates(%.1f,%.1f),(%.1f,%.1f) and (%.1f,%.1f) are not in a straight line",x1,y1,x2,y2,x3,y3);
    }
    return 0;
}
