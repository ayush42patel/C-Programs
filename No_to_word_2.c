#include <stdio.h>

void convertSingleDigit(int num)
{
    switch(num){
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
    }
}

// Function to convert a two-digit number to words
void convertTwoDigit(int num)
{
    if (num < 10) {
        convertSingleDigit(num);
    } else if (num >= 10 && num < 20) {
        switch (num) {
            case 10:
                printf("Ten ");
                break;
            case 11:
                printf("Eleven ");
                break;
            case 12:
                printf("Twelve ");
                break;
            case 13:
                printf("Thirteen ");
                break;
            case 14:
                printf("Fourteen ");
                break;
            case 15:
                printf("Fifteen ");
                break;
            case 16:
                printf("Sixteen ");
                break;
            case 17:
                printf("Seventeen ");
                break;
            case 18:
                printf("Eighteen ");
                break;
            case 19:
                printf("Nineteen ");
                break;
        }
    }else{
        int tens = num / 10;
        switch (tens) {
            case 2:
                printf("Twenty ");
                break;
            case 3:
                printf("Thirty ");
                break;
            case 4:
                printf("Forty ");
                break;
            case 5:
                printf("Fifty ");
                break;
            case 6:
                printf("Sixty ");
                break;
            case 7:
                printf("Seventy ");
                break;
            case 8:
                printf("Eighty ");
                break;
            case 9:
                printf("Ninety ");
                break;
        }
        convertSingleDigit(num % 10);
    }
}

// Function to convert a three-digit number to words
void convertThreeDigit(int num){
    int hundreds = num / 100;
    convertSingleDigit(hundreds);
    printf("Hundred ");
    convertTwoDigit(num % 100);
}

void convertfourdigit(int num){
    int thousand=num/1000;
    convertSingleDigit(thousand);
    printf("Thousand ");
    convertThreeDigit(num%1000);
}

void convertfivedigits(int num){
    int Ten=num/1000;
    convertTwoDigit(Ten);
    printf("Thousand ");
    convertThreeDigit(num%1000);
}

void convertsixdigit(int num){
    int lak=num/100000;
    convertSingleDigit(lak);
    printf("Lakhs ");
    convertfivedigits(num%100000);
}

void convertToWords(int num){
    if (num == 0){
        printf("Zero");
        return;
    }
    
    if (num < 0){
        printf("Minus ");
        num = -num;
    }

    if(num>=100000){
        convertsixdigit(num);
    }else if(num>=10000){
        convertfivedigits(num);
    }else if(num>=1000){
        convertfourdigit(num);
    }else if (num >= 100){
        convertThreeDigit(num);
    }else if (num >= 10){
        convertTwoDigit(num);
    }else{
        convertSingleDigit(num);
    }
}

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Number in words: ");
    convertToWords(number);
    printf("\n");
    return 0;
}