#include <stdio.h>
#include <conio.h>
int main(){
    int match=21,user_choice,computer_choice;
    while (match>1){
        printf("Total no of match sticks=%d\n",match);
        printf("Pick matchstick fromm 1 to 4:");
        scanf("%d",&user_choice);
        if(user_choice>4){
            printf("Invalid");
        }
        computer_choice=5-user_choice;
        printf("Computer picks up the %d match sticks.\n", computer_choice);
        match = match-user_choice-computer_choice;
        if(match==1){
            printf("\nYou have been lost via computer.");
            break;
        }
    }
    return 0;
}
