#include <stdio.h>
#include <string.h>
int main(){
    char str[20],news[20];
    char *s,*t;
    int pos,n,i;
    printf("Enter a string:");
    scanf("%s",str);
    printf("Position and no of characters to extract:");
    scanf("%d%d",&pos,&n);
    s=str;
    t=news;
    if(pos<0 || pos> strlen(str)){
        printf("Impropper position value\n");
        goto out;
    }
    if(n<0){
        n=0;
    }
    if(n>strlen(str)){
        n=strlen(str)-1;
    }
    s=s+pos;
    for(i=0;i<n;i++){
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    printf("Extracted string is:%s\n",news);
    out:
    printf("Please choose correct position next time\n");
    return 0;
}