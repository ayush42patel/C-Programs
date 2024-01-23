#include <stdio.h>
#include <stdlib.h>
int array_to_bst(int array[],int num){
    int bst[num];
    for(int i=0;i<num;i++){
        bst[i]=array[i];
    }
}
int main(){
    int num;
    printf("No of Elements:");
    scanf("%d",&num);
    int array[num];
    printf("Enter Elements:");
    for (int i = 0; i < num; i++){
        scanf("%d",&array[i]);
    }
    array_to_bst(array,num);
}