#include <stdio.h>
int main()
{
    float f,c;
    printf("Temperature in Celsius=");
    scanf("%f",&c);
    f=c*(9.0/5.0)+32;
    printf("Temperature in Fahrenheit=%f",f);
    return 0;
}
