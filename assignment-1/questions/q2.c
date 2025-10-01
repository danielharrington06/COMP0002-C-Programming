// Written by Daniel Harrington 1/10/2025
// This displays the address of the CS department

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Dept. of Computer Science";
    char address1[] = "Malet Place Engineering Building";
    char address2[] = "2 Malet Place";
    char address3[] = "London WC1E 7JE";
    printf("The address of the engineering building is as follows.\n");
    printf("%s\n", name);
    printf("%s\n", address1);
    printf("%s\n", address2);
    printf("%s\n", address3);
    return 0;
}