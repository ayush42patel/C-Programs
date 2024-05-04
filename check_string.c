#include <stdio.h>
#include <string.h>
int main()
{
    char *s[]={"Hi i am Ayush Patel.","I am trying to learn about programming languages","I have completed learning about python programming","But still learning about c programming language","Thanks."};
    char w1[20],*t;
    int i;
    printf("Enter string to search:");
    scanf("%s",&w1);
    t=NULL;
    for(i=0; i<20; i++){
        t=strstr(s[i],w1);
        if (t!=NULL){
            printf("The word %s found in the array",w1);
            goto out;
        }
    }
    printf("The word %s not found in the array",w1);
    return 0;
    out:
    return 0;
}