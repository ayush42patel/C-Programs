#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#define Max 1000

int item,choice,i;
int queue[Max];
int rear=0;
int front=1;

void enqueue(){
    if(rear==Max-1){
        printf("Queue is full!!");
        return ;
    }
    int t;
    printf("Enter how many no you want to add:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int E;
        printf("Enter the element you want to add:");
        scanf("%d",&E);
        rear++;
        queue[rear]=E;
        printf("Position:%d,Insert value:%d\n",rear+1,E);
    }
}

void dequeue(){
    if(front==rear){
        printf("Queue is Empty!!");
    }else{
        int t;
        printf("Enter how many no you want to add:");
        scanf("%d",&t);
        for(int i=0;i<t;i++){
            printf("Position:%d,Removed Item:%d\n",front,queue[front]);
            front++;
        }
    }
}

void display(){
    printf("Queue Elements:\n");
    for(i=front;i<=rear;i++){
        printf("Position:%d,Elements:%d\n",i,queue[i]);
    }
}

int main(){
    int ch;
    while(true){
        printf("Queue Main Menu:\n");
        printf("1.Insert\n");
        printf("2.Remove\n");
        printf("3.Display\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        if(ch==1){
            enqueue();
        }else if(ch==2){
            dequeue();
        }else if(ch==3){
            display();
        }else{
            printf("Invalid Input(1-3)!");
            exit(1);
        }
    }
    return 0;    
}