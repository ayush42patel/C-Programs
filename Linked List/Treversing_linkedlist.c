#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* createNode(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=m;
    newNode->next=NULL;
    return newNode;
}