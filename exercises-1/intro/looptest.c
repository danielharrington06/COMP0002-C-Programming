// Written by Daniel Harrington
// This compares using ++i and i++ in a loop

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", i);
    }
    return 0;
}