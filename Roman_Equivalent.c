#include <stdio.h>
int roman(int g){
    {  
    while(g)  
    {  
        if(g >= 1000){  
            printf("M");  
            g = g - 1000;  
        }else if(g >= 500){  
            printf("D");  
            g = g - 500;  
        }else if(g >= 100){  
            printf("C");  
            g = g - 100;  
        }else if(g >= 50){  
            printf("L");  
            g = g - 50;  
        }else if(g >= 10){  
            printf("X");  
            g = g - 10;  
        }else if(g >= 5){  
            printf("V");  
            g = g - 5;  
        }else if(g >= 1){  
            printf("I");  
            g = g - 1;  
        }  
    }
    printf("\n");  
}  
}
int main(){
    int num;
    printf("Enter Number=");
    scanf("%d",&num);
    roman(num);
    return 0;
}
