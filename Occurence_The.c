#include <stdio.h>
#include <string.h>
#include <ctype.h>
void deleteword(char *input,char *word){
    char *result=input;
    int wordlen=strlen(word);
    while((result=strstr(result,word))!=NULL){
        memmove(result,result+wordlen,strlen(result+wordlen)+1);
    }
}
int main(){
    char input[1000];
    char *word="The";
    printf("Enter a sentence:");
    fgets(input,sizeof(input),stdin);
    deleteword(input,word);
    printf("Modified line:%s\n",input);
    return 0;
}
