#include <stdio.h>
void first(){
    printf("|~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~|\n");
    printf("|                                         |\n");
    printf("|                 1.Add                   |\n");
    printf("|                 2.Sub                   |\n");
    printf("|                 3.Multiply              |\n");
    printf("|                 4.Divide                |\n");
    printf("|                                         |\n");
    printf("|~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~|\n");
    int a,n1,n2;
    float r;
    printf("Enter Option no:");
    scanf("%d",&a);
    printf("Enter No 1:");
    scanf("%d",&n1);
    printf("Enter No 2:");
    scanf("%d",&n2);
    if (a==1){
        r=n1+n2;
        printf("Sum of %d and %d is=%f",n1,n2,r);
    }else if (a==2){
        r=n1-n2;
        printf("Subtraction of %d and %f is=%d",n1,n2,r);
    }else if (a==3){
        r=n1*n2;
        printf("Multiplication of %d and %d is=%f",n1,n2,r);
    }else if (a==4){
        r=(float)n1/n2;
        printf("Division of %d and %d is=%f",n1,n2,r);
    }else{
        printf("Error choose from 1-4");
    }
}

void second(){
    printf("|~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~|\n");
    printf("|                                         |\n");
    printf("|                 1.Add (+)               |\n");
    printf("|                 2.Sub (-)               |\n");
    printf("|                 3.Multiply (*)          |\n");
    printf("|                 4.Divide (/)            |\n");
    printf("|                                         |\n");
    printf("|~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~|\n");
    int n1,n2;
    float r;
    printf("Enter No 1:");
    scanf("%d",&n1);
    printf("Enter No 2:");
    scanf("%d",&n2);
    char a[2];
    printf("Enter Option char:");
    scanf("%s",&a);
    if(a =="+"){
        r=n1+n2;
        printf("Sum of %d and %d is=%f",n1,n2,r);
    }else if (a =="-"){
        r=n1-n2;
        printf("Subtraction of %d and %d is=%f",n1,n2,r);
    }else if (a=="*"){
        r=n1*n2;
        printf("Multiplication of %d and %d is=%f",n1,n2,r);
    }else if (a=="/"){
        r=(float)n1/n2;
        printf("Division of %d and %d is=%f",n1,n2,r);
    }
}

void third(){
    printf("|~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~|\n");
    printf("|                                         |\n");
    printf("|                 1.Add                   |\n");
    printf("|                 2.Sub                   |\n");
    printf("|                 3.Multiply              |\n");
    printf("|                 4.Divide                |\n");
    printf("|                                         |\n");
    printf("|~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~|\n");
    int a,n1,n2;
    float r;
    printf("Enter Option no:");
    scanf("%d",&a);
    printf("Enter No 1:");
    scanf("%d",&n1);
    printf("Enter No 2:");
    scanf("%d",&n2);
    switch (a){
    case 1:
        r=n1+n2;
        printf("Sum of %d and %d is=%f",n1,n2,r);
        break;
    case 2:
        r=n1-n2;
        printf("Subtraction of %d and %f is=%d",n1,n2,r);
    case 3:
        r=n1*n2;
        printf("Multiplication of %d and %d is=%f",n1,n2,r);
    case 4:
        r=(float)n1/n2;
        printf("Division of %d and %d is=%f",n1,n2,r);
    default:
        printf("Error choose from 1-4:");
        break;
    }
}

void fourth(){
    printf("|~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~|\n");
    printf("|                                         |\n");
    printf("|                 1.Add                   |\n");
    printf("|                 2.Sub                   |\n");
    printf("|                 3.Multiply              |\n");
    printf("|                 4.Divide                |\n");
    printf("|                                         |\n");
    printf("|~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~|\n");
    int n1,n2;
    float r;
    printf("Enter No 1:");
    scanf("%d",&n1);
    printf("Enter No 2:");
    scanf("%d",&n2);
    char a;
    printf("Enter Option char:");
    scanf("%s",&a);
    switch(a){
    case '+':
        r=n1+n2;
        printf("Sum of %d and %d is=%f",n1,n2,r);
        break;
    case '-':
        r=n1-n2;
        printf("Subtraction of %d and %f is=%d",n1,n2,r);
        break;
    case '*':
        r=n1*n2;
        printf("Multiplication of %d and %d is=%f",n1,n2,r);
        break;
    case '/':
        r=(float)n1/n2;
        printf("Division of %d and %d is=%f",n1,n2,r);
        break;
    default:
        printf("Error choose from 1-4:");
        break;
    }
}

int main(){
    printf("|~~~~~~~~~~~~~~~~~~~~~~J VALUE~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|                                                  |\n");
    printf("|                1.If condition no                 |\n");
    printf("|                2.If condition char               |\n");
    printf("|                3.Switch condition no             |\n");
    printf("|                4.Switch condition char           |\n");
    printf("|                                                  |\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~~~~~|\n");
    int j;
    printf("Enter Value of J:");
    scanf("%d",&j);
    if (j==1){
        first();
    }else if (j==2){
        second();
    }else if (j==3){
        third();
    }else if (j==4){
        fourth();
    }else{
        printf("Error");
    }
    return 0;
}