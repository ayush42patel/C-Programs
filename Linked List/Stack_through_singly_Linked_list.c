#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100
struct Grade{
    int Marks;
    struct Grade *link;
};
struct Stack{
    struct Grade *top;
};
void initializeStack(struct Stack *s1) {
    s1->top = NULL;
}

int isEmpty(struct Stack *s1) {
    return s1->top == NULL;
}

int push(struct Stack *s1,int val){
    struct Grade *newGrade=(struct Grade *)malloc(sizeof(struct Grade));
    if(newGrade==NULL){
        printf("Memory allocation failed!!.\n");
        exit(1);
    }
    newGrade->Marks=val;
    printf("%d is pushed in linked list\n",val);
    newGrade->link=s1->top;
    s1->top=newGrade;
}
int pop(struct Stack *s1){
    if(s1->top==NULL){
        printf("Stack underflow!!\n");
        return 0;
    }
    struct Grade *temp=s1->top;
    printf("%d is popped from stack\n",s1->top->Marks);
    s1->top=s1->top->link;
    free(temp);
}
int display(struct Stack *s1){
    if(s1->top==NULL){
        printf("Stack is empty!\n");
        return 0;
    }
    struct Grade *cur=s1->top;
    printf("Marks of students in the stack:");
    while(cur!=NULL){
        printf("%d\t",cur->Marks);
        cur=cur->link;
    }
    printf("\n");
}

int main(){
    int ch;
    struct Stack Marks;
    initializeStack(&Marks);
    while(true){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exiting\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        if(ch==1){
            int num;
            printf("No of Students:");
            scanf("%d",&num);
            for(int i=0;i<num;i++){
                int m;
                printf("Enter marks of students %d:",i+1);
                scanf("%d",&m);
                push(&Marks,m);
            }
        }else if(ch==2){
            pop(&Marks);
        }else if(ch==3){
            display(&Marks);
        }else{
           printf("Exiting.....\n");
           exit(0);
        }
    }
}