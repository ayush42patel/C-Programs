#include <stdio.h>
int main(){
    int num,p=0,n=0,z=0;
    printf("No of elements=");
    scanf("%d",&num);
    int a[num];
    printf("ELements=");
    for (int i = 0; i < num; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < num; i++){
        if(a[i]>0){
            p=p+1;
        }else if(a[i]<0){
            n=n+1;
        }else if(a[i]==0){
            z=z+1;
        }else{
            printf("INVALID NO ENTERED");
        }
    }
    printf("The Total no of Positive no is=%d\n",p);
    printf("The Total no of Negative no is=%d\n",n);
    printf("The Total no of Zeroes is=%d\n",z);
    return 0;
}
