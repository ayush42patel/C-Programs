#include <stdio.h>
#include <math.h>
#define PI 3.14
int trignoratio(float m){
    float q,w,e,r,t,y;
    q=sin(m);
    w=cos(m);
    e=tan(m);
    printf("Trignometric ratio values sin=%f, cos=%f, tan=%f",q,w,e);
}
int main(){
    float m;
    printf("Degree=");
    scanf("%f",&m);
    m=(m*(PI/180.0));
    trignoratio(m);
    return 0;
}
