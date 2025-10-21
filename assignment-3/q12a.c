// Written by Daniel Harrington
// This program checks if a string is an IPv4 address

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int IsValidIPv4(const char *str) {
    int num, dots = 0;
    const char *p = str; // a pointer to walk through the string

    while (*p) { // while not null
        if (!isdigit(*p)) return 0;

        char *endptr; // represents the end of the read
        long num = strtol(p, &endptr, 10);

        if (p == endptr || num < 0 || num > 255) return 0;

        p = endptr;
        if (*p == '.') {
            dots++;
            p++;
        } else if (*p == '\0') {
            break;
        } else {
            return 0;
        }
    }

    return dots == 3;
}


int main(void)
{
    char string[16];
    printf("Please enter a string that I will determine if it could be an IPv4 address: ");
    scanf("%16s", string);

    if (IsValidIPv4(string)) {
        printf("That is a valid IPv4 address.\n");
    }
    else {
        printf("That is not a valid IPv4 address.\n");
    }
    return 0;
}