#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define capacity 6
int queue[capacity];
int front = -1, rear = -1;

int enqueue (int value){
    if (front!=-1){
        printf ("Overflow condition\n");
    }else{
        if (front == -1){
	        front = 0;

            rear = (rear + 1) % capacity;
            queue[rear] = value;
            printf ("%d was enqueued to circular queue\n", value);
        }
    }
}

int dequeue (){
    int variable;
    if (front== rear+1){
        printf ("Underflow condition\n");
        return -1;
    }else{
        variable = queue[front];
        if (front == rear){
    	    front = rear = -1;
    	}else{
    	    front = (front + 1) % capacity;
    	}
        printf ("%d was dequeued from circular queue\n", variable);
    }
}

int main(){
    int ch;
    int data;
    while(true){
        printf("1.Insert\n2.Delete\n3.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter data:");
            scanf("%d",&data); 
            enqueue(data);
        }else if(ch==2){
            dequeue();
        }else if(ch==3){
            exit(0);
        }else{
            printf("Wrong choice!");
        }
    }
}