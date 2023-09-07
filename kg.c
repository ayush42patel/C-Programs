#include <stdio.h>
void convert(int m,float *g,float*p,float *t){
    *g=(m*1000.0);
    *p=(m*2.20462);
    *t=(m/1000.0);
}
int main(){
    int m;
    float gram,pound,ton;
    printf("Weight in kg:");
    scanf("%d",&m);
    convert(m,&gram,&pound,&ton);
    printf("Weight in g=%f\n",gram);
    printf("Weight in pound=%f\n",pound);
    printf("Weigth in Ton=%f\n",ton);
}