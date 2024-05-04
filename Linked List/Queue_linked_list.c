#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
};
struct node *front;  
struct node *rear;

void insert(){
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL){  
        printf("\nOVERFLOW\n");  
        return;  
    }else{
        printf("Enter value?:");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL){  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }else{  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }
}

void delete(){  
    struct node *ptr;  
    if(front == NULL){  
        printf("\nUNDERFLOW\n");  
        return;
    }  
    else{  
        ptr = front;
        printf("Poped item:%d\n",ptr->data);  
        front = front -> next;  
        free(ptr);  
    }  
}

void display(){
    struct node *ptr;  
    ptr = front;      
    if(front == NULL){  
        printf("\nEmpty queue\n");  
    }
    else{
        printf("\nprinting values .....\n");  
        while(ptr != NULL){  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }
    }
}

void main(){
    int ch;
    while(true){
        printf("1.Inserting.\n2.Deleting\n3.Display\n4.Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)  
        {  
            case 1:  
                insert();  
                break;  
            case 2:  
                delete();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:  
                exit(0);  
                break;  
            default:   
                printf("\nEnter valid choice??\n");  
        }  
    }  
} 
