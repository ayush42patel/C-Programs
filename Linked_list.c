#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100
typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* top=NULL;

void push(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
    }else{
        newNode->data = data;
        newNode->next = top;
        top = newNode;
        printf("%d pushed in the stack.\n",data);
    }
}

void pop() {
    if (top==NULL) {
        printf("Stack underflow.\n");
    }else{
        Node* temp =top;
        int poppeddata = temp->data;
        printf("Popped element is:%d\n",poppeddata);
        top = temp->next;
        free(temp);
    }
}
void display() {
    struct Node* head;
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
// int display(){
//     struct Node* top;
//     if(top==NULL){
//         printf("Stack Underflow.\n");
//     }else{
//         printf("Stack: ");
//         while(top!= NULL){
//             int dis=top->data;
//             printf("%d",dis);
//             top=top->next;
//         }
//     }
// }

int main(){
    struct Node* top = NULL;

    int ch;
    while(true){
        printf("1.Push\n2.Pop\n3.Display\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        if(ch==1){
            int data;
            printf("Enter Data:");
            scanf("%d",&data);
            push(data);
        }else if(ch==2){
            pop();
        }else if(ch==3){
            display();
        }else{
            exit(0);
        }
    }
}