#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);    
    int reversed = 0, original = num, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num=num / 10;
    }

    if(original == reversed){
        printf("%d is a pallindrome",original);
    }
    else{
        printf("%d is not a pallindrome",original);
    }

    return 0;
}
