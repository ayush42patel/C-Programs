#include <stdio.h>

int main() {
    int num, result = 0, re;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        re = num % 10;
        result = result * 10 + re;
        num=num/ 10;
    }

    printf("Reversed number: %d\n", result);

    return 0;
}
