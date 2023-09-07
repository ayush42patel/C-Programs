#include <stdio.h>
#include <string.h>
void writing(){
    printf("Writting in  a file\n");
    FILE *a;
    a=fopen("E:/A.txt","w");
    int b,c,i;
    printf("Length of array=");
    scanf("%d",&b);
    printf("How many lines?:");
    scanf("%d",&c);
    for (i = 1;i<=c;i++){
        char d[b];
        printf("What you want to write?:");
        scanf("%s",d);
        fprintf(a,d);
        fprintf(a,"\n");       
    }
    fclose(a);
}
void reading(){
    printf("Reading in a file\n");
    FILE *e;
    e=fopen("E:/A.txt","r");
    int c,word,count=1;
    printf("Enter Lines you want to read:");
    scanf("%d",&c);
    char f[c];
    char search[100];
    printf("Enter word to be search:");
    scanf("%s",search);
    while(fgets(f,c,e)){
        char *p=strstr(f,search);
        if(p != NULL){
            word=1;
            break;
        }
    }
    if (word==1){
        printf("WORD EXIST\n");
    }else{
        printf("word does not exist\n");
    }
    while(fgets(f,c,e)){
        char *j=strstr(f,search);
        if(j != NULL){
            count=count+1;
        }
    }
    printf("Total no of times %s exist in file=%d",search,count);
}
int main(){
    writing();
    reading();
    return 0;
}