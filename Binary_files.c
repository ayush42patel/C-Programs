#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 1000
void writing(){
    FILE *a;
    a=fopen("E:\\B.dat","wb");
    char w[max];
    printf("What you want to write in a file:");
    fgets(w,sizeof(w),stdin);
    fwrite(w,sizeof(char),strlen(w), a);
    fclose(a);
    printf("Data written successfully.");
}

void reading(){
    FILE *a;
    a=fopen("E:\\B.dat","rb");
    char w[max];
    if(a==NULL){
        printf("File not present");
    }
    fread(w,sizeof(int),sizeof(w),a);
    fclose(a);
    for (int i = 0; i < 1; i++){
        printf("%s",w);
    }
}

int main(){
    int choice;
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1){
        writing();
    }else if(choice==2){
        reading();
    }else{
        printf("Invalid choice!(1-2)");
        exit(1);
    }
    return 0;
}