// Written by Daniel Harrington
// This program finds x^y with a loop and with recursion

#include <stdio.h>

int XtoY_Loop(int x, int y) {

    int result = x;
    for (int i = 0; i < y-1; i++) {
        result = result * x;
    }
    return result;
}

int XtoY_Recursion(int x, int y) {
    if (y == 1) {
        return x;
    }
    else {
        return x * XtoY_Recursion(x, y - 1);
    }
}

int main(void)
{
    int x = 0;
    int y = 0;

    printf("Enter an integer value for x: ");
    scanf("%d", &x);
    printf("Enter an integer value for y: ");
    scanf("%d", &y);

    if (y >= 1) {
        //printf("%d ^ %d = %d\n", x, y, XtoY_Loop(x, y));
        printf("%d ^ %d = %d\n", x, y, XtoY_Recursion(x, y));
    }
    else {
        printf("\nY must be an integer greater than or equal to 1\n");
    }
    return 0;
}