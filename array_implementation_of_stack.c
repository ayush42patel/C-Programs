#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 50
int stack[Max+1],top=0;
void create(){
    char ch;
    do{
        top++;
        printf("Input Element:");
        scanf("%d",stack[top]);
        printf("Press 'Y' for more element");
        ch=getch();
    }
    while(ch=='Y');
}
void traverse(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
void push(){
    int m;
    if(top==Max){
        printf("Stack Overflow\n");
    }else{
        printf("Input Element:");
        scanf("%d",m);
        top++;
        stack[top]=m;
    }
}
void pop(){
    if(top==0){
        printf("Stack Underflow\n");
    }else{
        stack[top]=0;
        top--;
    }
    
}
void main(){
    while (true){
        int j;
        printf("1.create\n2.traverse\n3.push\n4.pop\n");
        printf("Enter your choice:");
        scanf("%d",&j);
        if(j){
            create();
        }else if(j==1){
            traverse();
        }else if(j==2){
            push();
        }else if(j==3){
            pop();
        }else{
            exit(0);
        }
    }
}
