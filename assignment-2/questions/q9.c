// Written by Daniel Harrington
// This program draws a rightward pointing triangle

#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main(void)
{
    for (int i = 0; i < 9; i++) {
        printf("*");
        int m = min(i, 8-i);
        for (int j = 0; j < m; j++) {
            if (j == m-1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}