#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
            printf("Position:%d\tElements:%d\n",i,a[i]);
        }
    }
}

void peek(){
    if(top==-1){
        printf("Underflow!\n");
    }else{
        printf("Top most element:%d\n",a[top]);
    }
}

int main(){
    int choice;
    while(true){
        printf("Perform Operation in stack\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.Exit\n");
        
        printf("Enter the choice:");
        scanf("%d",&choice);
        if(choice==1){
            push();
        }else if(choice==2){
            pop();
        }else if(choice==3){
            display();
        }else if(choice==4){
            peek();
        }else if(choice==5){
            exit(0);
        }
    }
}
