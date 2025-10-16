// Written by Daniel Harrington
// Draws a rectangle of a specified character and dimensions

#include <stdio.h>

int main(void)
{
    int x = 1;
    int y = 1;
    char c = 'x';

    printf("Number of Rows: ");
    scanf(" %d", &y);
    printf("Number of Columns: ");
    scanf(" %d", &x);
    printf("Character: ");
    scanf(" %c", &c);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}