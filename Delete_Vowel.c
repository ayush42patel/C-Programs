#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define E 100 
void removevowel(char sentence[]){
    char result[E];
    int i,j=0;
    for (i = 0;sentence[i]!='\0'; i++){
        char c= tolower(sentence[i]);
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'){
            result[j]=sentence[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("Sentence without vowels: %s\n",result);
    }

int main(){
    char sentence[E];
    printf("Enter a Sentence:");
    fgets(sentence,sizeof(sentence),stdin);
    removevowel(sentence);
    return 0;
}