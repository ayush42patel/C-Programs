#include <stdio.h>
void con()
{
    int l0,b0,i;
    l0=1189;
    b0=841;
    printf("Value of i(0 to 8):");
    scanf("%d",&i);
    if (i==0){
        printf("Dimension of A0 is %d mm X %d mm",l0,b0);
    }else if (i==1){
        int l1,b1;
        l1=b0;
        b1=l0/2;
        printf("Dimension of A1 is %d mm X %d mm",l1,b1);
    }else if (i==2){
        int l2,b2;
        l2=l0/2;
        b2=b0/2;
        printf("Dimension of A2 is %d mm X %d mm",l2,b2);
    }else if (i==3)
    {
        int l3,b3;
        l3=b0/2;
        b3=l0/4;
        printf("Dimension of A3 is %d mm X %d mm",l3,b3);
    }else if (i==4){
        int l4,b4;
        l4=l0/4;
        b4=b0/4;
        printf("Dimension of A4 is %d mm X %d mm",l4,b4);
    }else if (i==5){
        int l5,b5;
        l5=b0/4;
        b5=l0/8;
        printf("Dimension of A5 is %d mm X %d mm",l5,b5);

    }else if (i==6){
        int l6,b6;
        l6=l0/8;
        b6=b0/8;
        printf("Dimension of A6 is %d mm X %d mm",l6,b6);

    }else if (i==7){
        int l7,b7;
        l7=b0/8;
        b7=l0/16;
        printf("Dimension of A7 is %d mm X %d mm",l7,b7);

    }else if (i==8){
        int l8,b8;
        l8=l0/16;
        b8=b0/16;
        printf("Dimension of A8 is %d mm X %d mm",l8,b8);

    }
}

void Switch()
{
    int i,l0,b0;
    l0=1189;
    b0=841;
    printf("Value of i(0 to 8):");
    scanf("%d",&i);
    switch (i)
    {
    case 0:
       printf("Dimension of A0 is %d mm X %d mm",l0,b0);
       break;
    case 1:
        printf("Dimension of A1 is %d mm X %d mm",b0,l0/2);
        break;
    case 2:
        printf("Dimension of A2 is %d mm X %d mm",l0/2,b0/2);
        break;
    case 3:
        printf("Dimension of A3 is %d mm X %d mm",b0/2,l0/4);
        break;
    case 4:
        printf("Dimension of A4 is %d mm X %d mm",l0/4,b0/4);
        break;
    case 5:
        printf("Dimension of A5 is %d mm X %d mm",b0/4,l0/8);
        break;
    case 6:
        printf("Dimension of A6 is %d mm X %d mm",l0/8,b0/8);
        break;
    case 7:
        printf("Dimension of A7 is %d mm X %d mm",b0/8,l0/16); 
        break;
    case 8:
        printf("Dimension of A8 is %d mm X %d mm",l0/16,b0/16);
        break;
    }
}
int main()
{
    int j;
    printf("~~~~~~~~~~~~Menu~~~~~~~~~~~~\n");
    printf("1.Condition\n");
    printf("2.Switch\n");
    printf("~~~~~~~~~~~~~END~~~~~~~~~~~~\n");
    printf("Value of J=");
    scanf("%d",&j);
    if (j==1){
        con();
    }else if (j==2)
    {
        Switch();  
    }else{
        printf("Invalid Please Enter 1,2");
    }
    return 0;
}
