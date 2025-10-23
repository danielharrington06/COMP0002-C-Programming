// Written by Daniel Harrington 01/10/2025
// This programs draws a centered square then a circle around it
#include "graphics.h"

int main(void)
{
    // main tower section
    drawRect(230, 100, 40, 200); 
    // bumpy bits
    drawOval(220, 80, 60, 20);
    drawOval(220, 60, 60, 20);
    drawOval(220, 40, 60, 20);
    // top spire
    drawRect(245, 20, 10, 20);
    return 0;
}