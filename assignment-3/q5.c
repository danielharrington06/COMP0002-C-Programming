// Written by Daniel Harrington
// This program verbalises a number between 0 and -999

#include <stdio.h>

void ZeroToNine(int num) {
    if (num == 0) {
        // leave empty for cases like 100, 630 when 0 digit is being applied
    }
    else if (num == 1) {
        printf("one");
    }
    else if (num == 2) {
        printf("two");
    }
    else if (num == 3) {
        printf("three");
    }
    else if (num == 4) {
        printf("four");
    }
    else if (num == 5) {
        printf("five");
    }
    else if (num == 6) {
        printf("six");
    }
    else if (num == 7) {
        printf("seven");
    }
    else if (num == 8) {
        printf("eight");
    }
    else if (num == 9) {
        printf("nine");
    }
    else {
        printf("Error in ZeroToNine");
    }
}

void TenToNineteen(int num) {
    if (num == 10) {
        printf("ten");
    }
    else if (num == 11) {
        printf("eleven");
    }
    else if (num == 12) {
        printf("twelve");
    }
    else if (num == 13) {
        printf("thirteen");
    }
    else if (num == 14) {
        printf("fourteen");
    }
    else if (num == 15) {
        printf("fifteen");
    }
    else if (num == 16) {
        printf("sixteen");
    }
    else if (num == 17) {
        printf("seventeen");
    }
    else if (num == 18) {
        printf("eighteen");
    }
    else if (num == 19) {
        printf("nineteen");
    }
    else {
        printf("Error in TenToNineteen");
    }
}

// takes number from 20 to 99
void TwentyToNinetyNine(int num) {
    if (num < 40) {
        printf("thirty");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 50) {
        printf("forty");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 60) {
        printf("fifty");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 70) {
        printf("sixty");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 80) {
        printf("seventy");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 90) {
        printf("eighty");
        printf(" ");
        ZeroToNine(num % 10);
    }
    else if (num < 100) {
        printf("ninety");
        printf(" ");
        ZeroToNine(num % 10);
    }
}

void Hundreds(int num) {
    int hundreds = num / 100;
    int remainder = num % 100;
    ZeroToNine(hundreds);
    printf(" hundred");
    if (remainder == 0) {

    }
    else {
        printf(" and ");
        VerbaliseNumber(remainder);
    }
}

void VerbaliseNumber(int num) {
    // deal with cases
    if (num == 0) {
        printf("zero");
    }
    else if (num < 10) {
        ZeroToNine(num);
    }
    else if (num < 20) {
        TenToNineteen(num);
    }
    else if (num < 100) {
        TwentyToNinetyNine(num);
    }
    // anything above 100 can be dealt with first with 100s then mod 100

    else {
        Hundreds(num);
    }
    printf("\n");
}

int main(void)
{
    int num = 0;

    printf("Please enter a number between 0 and 999: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 999) {
        VerbaliseNumber(num);
    }
    else {
        printf("That number is not in the range 0 to 999.");
    }
    return 0;
}