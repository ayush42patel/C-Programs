#include <stdio.h>
void inverse(){
    int rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    for (int i =0; i < rows ; i++){
        for (int j = 0; j <rows -i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}
void simple(){
    int rows;
    printf("Rows=");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++){

    }
    
}
int main(){
    inverse();
}