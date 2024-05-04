#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define M 1000
int main(){
    char input[M];
    int count=0;
    printf("Enter a sentence:");
    fgets(input,sizeof(input),stdin);

    for (int i = 0; i < strlen(input); i++){
        input[i]=tolower(input[i]);
    }

    for (int j = 0; j < strlen(input)- 1; j++){
        if(isalpha(input[j]) && isalpha(input[j+1])){
            if (strchr("aeiou", input[j]) && strchr("aeiou", input[j + 1])) {
                count++;
            }
        }
    }
    if(count>0){
        printf("Total occurence of consecutive vowels:%d",count);
    }else{
        printf("No occurences of consecutive vowels in the sentence");
    }
}
