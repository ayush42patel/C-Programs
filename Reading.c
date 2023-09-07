#include <stdio.h>
# include <string.h>

void reading(){
    int j;
    printf("value of j=");
    scanf("%d",&j);
    if (j==1){
        printf("Reading a file\n");
        printf("code for reading all character in a line\n");
        FILE *a;
        a=fopen("E:/Fact.txt","r");
        int c;
        printf("How many lines=");
        scanf("%d",&c);
        char b[c];
        fgets(b,c,a);
        printf("%s",b);
        fclose(a);
    }else if (j==2){
        printf("Reading a file\n");
        printf("Code for reading all lines\n");
        FILE *a;
        a=fopen("E:/Fact.txt","r");
        int c;
        printf("C VALUE=");
        scanf("%d",&c);
        char b[c];
        while(fgets(b,c,a)){
            printf("%s",a);
        }
    }
}
int main(){
    reading();
    return 0;
}
