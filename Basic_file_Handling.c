#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 1000
struct Student{
    char name[100];
    int rollNo;
    char department[100];
    char course[50];
    int age;
    int yearofjoining;
    int yearofstudying;
};

void writing(){
    FILE *a;
    a=fopen("E:\\A.txt","w");
    char g[max];
    int t;
    printf("How many Lines?:");
    scanf("%d",&t);
    printf("Write what you want to write in file:");
    for(int i=0;i<=t; i++){
        fgets(g,sizeof(g),stdin);
        fprintf(a,g);
    }
    fprintf(a,"\n");
    fclose(a);
}
void reading(){
    FILE *a;
    a=fopen("E:\\A.txt","r");
    char g[max];
    if(a==NULL){
        printf("Error file not avilable");
    }
    while(fgets(g,max,a)){
        printf("%s",g);
    }
    fclose(a);
}

int main(){
    int choice;
    printf("Text File\n");
    printf("1.Writing in a text file\n");
    printf("2.Reading in a text file\n");
    printf("Exit\n");
    printf("Enter Choice:");
    scanf("%d",&choice);
    if(choice==1){
        writing();
    }else if(choice==2){
        reading();
    }else{
        printf("Invalid Choice!(1-2)");
        exit(1);
    }
}