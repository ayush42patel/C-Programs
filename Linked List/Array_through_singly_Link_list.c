#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct List{
    int element;
    struct List *link;
};
struct List* initializeLinkedList() {
    return NULL;
}

struct List* push(struct List *first,int val){
    struct List *newNode=(struct List *)malloc(sizeof(struct List));
    if(newNode==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->element=val;
    printf("%d is pushed in the array\n",val);
    newNode->link=NULL;
    if(first==NULL){
        return newNode;
    }
    struct List *cur=first;
    while(cur->link!=NULL){
        cur=cur->link;
    }
    cur->link=newNode;
    return first;
}
struct List* pop(struct List *first){
    if(first==NULL){
        printf("Linked List is empty. Cannot pop.\n");
        return NULL;
    }
    if(first->link=NULL){
        free(first);
        return NULL;
    }
    struct List *cur=first;
    while(cur->link->link !=NULL){
        cur=cur->link;
    }
    printf("%d is popped from yhe array\n",cur->element);
    free(cur->link);
    cur->link=NULL;
    return first;
}
void display(struct List *first){
    if(first==NULL){
        printf("Linked List is empty.\n");
        return ;
    }
    struct List *cur=first;
    printf("Array elements: ");
    while(cur!=NULL){
        printf("%d\t",cur->element);
        cur=cur->link;
    }
    printf("\n");
}
int search_singly(struct List *first,int t){
    struct List *cur=first;
    int index=0;
    while(cur!=NULL){
        if(cur->element==t){
            printf("%d found in array:",t);
        }
        cur=cur->link;
        index++;
    }
    return 0;
}
void modify_singly(struct List *first,int index,int val){
    struct List *cur=first;
    int currentIndex=0;
    while(cur!=NULL && currentIndex<index){
        cur=cur->link;
        currentIndex++;
    }
    if(cur!=NULL){
        cur->element=val;
        printf("Moodified List:");
        display(first);
    }else{
        printf("Invalid Index\n");
    }
}

int main(){
    struct List *ar=initializeLinkedList();
    int num,val,choice;
    while(true){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Search\n5.Modify\n");
        printf("Enter Choice");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter no of elements:");
            scanf("%d",&num);
            printf("Enter value:");
            scanf("%d",&val);
            push(ar,val);
        }else if(choice==2){
            pop(ar);
        }else if(choice==3){
            display(ar);
        }else if(choice==4){
            int t;
            printf("Enter target:");
            scanf("%d",&t);
            search_singly(ar,t);
        }else if(choice==5){
            int index,value;
            printf("Enter modified value:");
            scanf("%d",&value);
            printf("Enter Index value:");
            scanf("%d",&index);
            modify_singly(ar,index,value);
        }else{
            printf("Exiting...\n");
            exit(0);
        }
    }
}