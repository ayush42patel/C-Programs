/*#include <stdio.h>
#include <math.h>
int series(float g,int m){
    float a,s,d,r,res=0;
    a=(g-1)/g;
    for (int i = 2; i < m; i++){
        s=pow(a,i);
        d=s/2;
        res=res+r;
    }
    res=res+d;
    printf("Result: %f",res);
}
int main(){
    float x;
    int m;
    printf("Enter Values of x:");
    scanf("%f",&x);
    printf("Enter No of Terms=");
    scanf("%d",&m);
    series(x,m);
    return 0;
}*/
#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int count;  
    float x, result = 0.0;  
  
    printf("Enter value of x\n");  
    scanf("%f", &x);  
  
    for(count = 1; count <= 7; count++)  
    {  
        if(count == 1)  
        {  
            result = (x - 1) / x;  
        }  
        else  
        {  
            result = result + pow( (x - 1) / x, count) * 0.5;  
        }  
    }  
  
    printf("Result of first 7 terms = %0.2f\n", result);  
  
    return 0;  
}  
