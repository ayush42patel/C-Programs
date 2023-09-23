#include <stdio.h>
#include <stdlib.h>
#define Max_Size 100
int top = -1, a[Max_Size];
void push(){
    int x,t;
    printf("Enter how many no you want to add:");
    scanf("%d",&t);

    if(top==Max_Size-1){
        printf("Overflow!!\n");
    }else{
        for(int j=1;j<=t;j++){
            printf("Enter the element to be added in the stack:");
            scanf("%d",&x);
            top=top+1;
            a[top]=x;
        }
    }
}

void pop(){
    int t;
    printf("Enter how many items you want to pop:");
    scanf("%d",&t);

    if(top==-1){
        printf("Underflow!\n");
    }else{
        for(int j=1;j<=t;j++){
            printf("Popped Element:%d\n",a[top]);
            top=top-1;
        }
    }
}

void display(){
    if(top==-1){
        printf("Underflow!\n");
    }else{
        printf("Enter present in the stack:\n");
        for (int i = top; i>=0; --i){
            printf("%d\n",a[i]);
        }
    }
}
int main(){
    int choice,u;
    printf("Enter how times:");
    scanf("%d",&u);
    for(int j=1; j<=u;j++){
        printf("|~~~~~~~~~~Perform Operation in stack~~~~~~~~~~|\n");
        printf("|                                              |\n");
        printf("|                  1.Push                      |\n");
        printf("|                  2.Pop                       |\n");
        printf("|                  3.Display                   |\n");
        printf("|                  4.End                       |\n");
        printf("|                                              |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~EXIT~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        if(choice==1){
            push();
        }else if(choice==2){
            pop();
        }else if(choice==3){
            display();
        }else if(choice==4){
            exit(0);
        }
    }
}
