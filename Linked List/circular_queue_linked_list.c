#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
  int data;
  struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

void enqueue (int d){
    struct node *n;
    n = (struct node *) malloc (sizeof (struct node));
    n->data = d;
    n->next = NULL;
    if ((r == NULL) && (f == NULL)){
        f = r = n;
        printf("Added element:%d",f->data);
        r->next = f;
    }else{
        r->next = n;
        r = n;
        n->next = f;
        printf("Added element:%d",f->data);
    }
}

void dequeue (){
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL)){
        printf ("\nQueue is Empty");
    }else{
        f = f->next;
        printf("Popped data:%d\n",f->data);
        r->next = f;
        free (t);
    }
}

void display (){
    struct node *t;
    t = f;
    if ((f == NULL) && (r == NULL)){
        printf ("\nQueue is Empty");
    }else{
        do{
    	    printf (" %d", t->data);
    	    t = t->next;
    	}
        while (t != f);
    }
}
int main(){
    int ch;
    int data;
    while(true){
        printf("\n1.Insert\n2.Delete\n3.Exit\n");
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