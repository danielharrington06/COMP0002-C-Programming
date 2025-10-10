// Written by Daniel Harrington
// This program displays a right arrow pattern

#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main(void)
{
    for(int i = 0; i < 9; i++) {
        int m = min(i, 8-i);
        for(int j = 0; j < 9; j++){
            if (m <= j && j < m+5) {
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

