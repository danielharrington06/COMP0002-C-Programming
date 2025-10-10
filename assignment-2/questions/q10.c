// Written by Daniel Harrington
// This program prints what looks like two right angled triangles making up a square

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 7; i++) {
        printf("*");
    }
    printf("\n");

    // middle complicated bit
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if(j == 0) {
                printf("#");
            }
            else if(j == 6) {
                printf("*");
            }
            else if(i == j -1) {
                printf("*");
            }
            else if (i == j) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 7; i++) {
        printf("#");
    }
    printf("\n");
    return 0;
}