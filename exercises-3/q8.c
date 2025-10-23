// Written by Daniel Harrington
// This program determines if a number is a strong number

// a strong number is one where the factorials of the digits forming the number sum to make the number
// such as 145 => 1! + 4! + 5! = 1 + 24 + 120 = 145

// only strong numbers are 1, 2, 145, 40585

#include <stdio.h>
#include <stdbool.h>

int Factorial(int num) {
    long int product = 1;
    for (int i = 1; i <= num; i++) {
        product *= i;
    }
    return product;
}

bool IsStrongNumber(int num) {
    int sum = 0;
    char buffer[32];
    sprintf(buffer, "%d", num);
    for (int i = 0; buffer[i] != '\0'; i++) {
        int x = buffer[i] - '0'; // subtracting '0' then implicitly casts
        sum += Factorial(x);
    }
    
    if (sum == num) {
        return true;
    }
    else {
        return false;
    }
}

int main(void)
{
    int x = 0;
    printf("This program determines if a number is a strong number\n");
    printf("Please enter a number: ");
    scanf("%d", &x);

    if (IsStrongNumber(x)) {
        printf("%d is a strong number\n", x);
    }
    else {
        printf("%d is not a strong number\n", x);
    }

    return 0;
}