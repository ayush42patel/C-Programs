#include <stdio.h>
void multiply(){
    int r,c,i,j,k;
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    int a[r][c],b[r][c],mul[r][c];
    printf("Enter the first matrix element=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix element=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of the given matrix=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            mul[i][j] = 0;
            for (k = 0; k < c; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}

void addition(){
    int r,c,i,j,k;
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    int a[r][c],b[r][c],add[r][c];
    printf("Enter the first matrix element=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix element=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of both matrices are=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j< c; j++){
            add[i][j] =a[i][j]+b[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m;
    printf("Enter Value of m:");
    scanf("%d",&m);
    if (m==1){
        multiply();
    }else if (m==2){
        addition(); 
    }
    return 0;
}
