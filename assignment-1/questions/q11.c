// Written by Daniel Harrington 03/10/2025
// This program displays the CS address on drawapp

#include "graphics.h"

int main(void)
{
    char name[] = "Dept. of Computer Science";
    char address1[] = "Malet Place Engineering Building";
    char address2[] = "2 Malet Place";
    char address3[] = "London WC1E 7JE";

    drawString(name, 50, 50);
    drawString(address1, 50, 100);
    drawString(address2, 50, 150);
    drawString(address3, 50, 200);
    
    return 0;
}