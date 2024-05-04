#include <stdio.h>
#include <math.h>
int convertpolar(float x,float y){
    float r,fi,s,d;
    d=y/x;
    s=((x*x)+(y*y));
    r=sqrt(s);
    fi=atan(d);
    printf("The polar coordinate of(%f,%f) is= (%f,%f)",x,y,r,fi);
}
int convertcartesian(float r,float fi){
    float x,y,d,m;
    m=cos(fi);
    d=sin(fi);
    x=r*m;
    y=r*d;
    printf("The caatesian coordinate of(%f,%f) is= (%f,%f)",r,fi,x,y);
}
int main(){
    int g;
    printf("G value=");
    scanf("%d",&g);
    if (g==1){
        float x,y;
        printf("X coordinate=");
        scanf("%f",&x);
        printf("Y Coordinate=");
        scanf("%f",&y);
        convertpolar(x,y);
    }else if (g==2){
        float r,fi;
        printf("R Coordinate=");
        scanf("%f",&r);
        printf("Fi coordinate=");
        scanf("%f",&fi);
        convertcartesian(r,fi);
    }
    
    return 0;
}
