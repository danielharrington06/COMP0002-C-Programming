// Written by Daniel Harrington
// This program determines if an ineteger is palindrome

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ReverseString(const char *input) {
    int len = strlen(input);
    char *reversed = malloc(len + 1);
    if (reversed == NULL) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        reversed[i] = input[len - 1 - i];
    }
    reversed[len] = '\0';
    return reversed;
}

int main(void)
{
    long x = 0;

    printf("Please enter an integer: ");
    scanf("%ld", &x);

    char x_str[32]; // Make sure it's large enough

    sprintf(x_str, "%ld", x); // or use snprintf for safety


    // check if palindrome
    if (strcmp(x_str, ReverseString(x_str)) == 0) {
        printf("%ld is a palindrome.\n", x);
    }
    else {
        printf("%ld is not a palindrome.\n", x);
    }
    return 0;
}