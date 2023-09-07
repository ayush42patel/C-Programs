#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int convertnauticle(double L1, double L2,double G1, double G2){
    double a,s,d,f,g;
    a=((sin(L1))*(sin(L2)));
    s=((cos(L1))*(cos(L2)));
    d=cos(G2-G1);
    f=6371*(acos((sin(L1)*(sin(L2)))+(cos(L1)*(cos(L2)))*(cos(G2-G1))));
    g=f*0.539957;
    printf("Distance between(%lf,%lf)and (%lf,%lf)=%lf",L1,G1,L2,G2,g);
}
int main(){
    int m;
    printf("M=");
    scanf("%d",&m);
    if (m==1){
        double L1,L2,G1,G2;
        printf("Latitude 1=");
        scanf("%lf",&L1);

        printf("Longitude 1=");
        scanf("%lf",&G1);
        
        printf("Latitude 2=");
        scanf("%lf",&L2);
        
        printf("Longitude 2=");
        scanf("%lf",&G2);
        L1=(L1*(PI/180.0));
        L2=(L2*(PI/180.0));
        G1=(G1*(PI/180.0));
        G2=(G2*(PI/180.0));
        convertnauticle(L1,L2,G1,G2);
    }
    return 0;
}
