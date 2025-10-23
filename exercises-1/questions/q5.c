// Written by Daniel Harrington 01/10/202
// This program displays some rectangles
#include "graphics.h"

int main(void)
{
    // drawn using dra lines
    drawLine(30, 30, 30, 80);
    drawLine(30, 80, 120, 80);
    drawLine(120, 80, 120, 30);
    drawLine(120, 30, 30, 30);

    // drawn using draw rect
    drawRect(150, 50, 60, 140);
    return 0;
}