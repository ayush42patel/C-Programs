#include <stdio.h>
#include <string.h>
int main()
{
    char *d[]={"Harsh","Saurabh","Adarsh","Akash","Divyanshu","Ayush","Aditya"};
    char *h;
    int i,j;
    for (i = 0; i <7; i++){
        for (j = i+1; j < 7; j++){
            if((strcmp(d[i],d[j]))>0){
                h=d[i];
                d[i]=d[j];
                d[j]=h;
            }
        }   
    }
    for (i = 0; i <7; i++){
        printf("%s\t",d[i]);
    }
    
    return 0;
}