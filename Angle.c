#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
    float d,f,e,g;
    printf("Degree=");
    scanf("%f",&d);
    d=(d*(PI/180.0));
    f=(sin(d)*sin(d));
    e=(cos(d)*cos(d));
    g=f+e;
    if(g==1){
        printf("Sum is equal to one");
    }else{
        printf("Sum is not equal to one");
    }
    return 0;
}
