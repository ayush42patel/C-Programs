#include <stdio.h>
int strlen(char *str) {
    int length = 0;
    while (*str != '\0'){
        length++;
        str++;
    }
    return length;
}

char* strcat(char *dest, char *src){
    char *temp = dest;
    while (*temp != '\0'){
        temp++;
    }
    while (*src != '\0'){
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';
    return dest;
}
char* strcpy(char *dest,char *src){
    char *temp = dest;
    while (*src != '\0') {
        *temp = *src;
        temp++;
        src++;
    }
    *temp = '\0';
    return dest;
}
int main() {
    int n;
    printf("Enter Size of string:");
    scanf("%d",&n);
    char str1[n];
    printf("Enter Str1:");
    scanf("%s",&str1);
    char str2[n];
    printf("Enter Str2:");
    scanf("%s",&str2);
    
    printf("Length of str1: %d\n", strlen(str1));
    printf("Concatenation: %s\n", strcat(str1, str2));
    printf("Copy: %s\n", strcpy(str1, str2));
    return 0;
}