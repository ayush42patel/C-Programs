#include <stdio.h>
int power(int x,int y){
    if (y == 0){
        return 1;
    }
    else if (y % 2 == 0){
        return power(x, y / 2) * power(x,y/2);
    }else{
        return x * power(x, y / 2) * power(x,y/2);
    }
}
int armstrong(int x){
    int n;
    printf("No of digits:");
    scanf("%d",&n);
    int temp=x,sum=0,r;
    while(temp){
        r=temp%10;
        sum=sum+power(r,n);
        temp=temp/10;
    }
    if (sum == x){
        printf("The no %d follows armstrong function",x);
    }else{
        printf("The no %d do not follow armstrong function",x);
    }
}
int main(){
    int a,s;
    printf("Enter value of a:");
    scanf("%d",&a);
    s=armstrong(a);
    return 0;
}