#include <stdio.h>
#include <math.h>
int wcf(float t,float k){
    float h;
    h=35.74+(0.6215*t)-(35.75*k)+(0.4275*t*k);
    printf("Wind chill factor=%f",h);
}
int main(){
    float t,v,k;
    printf("Temp=");
    scanf("%f",&t);
    printf("Speed=");
    scanf("%f",&v);
    k=pow(v,0.16);
    printf("%f\n",k);
    wcf(t,k);
    return 0;
}
