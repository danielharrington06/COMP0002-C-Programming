// Written by Daniel Harrington 02/10/2025
// This program draws aseries of concentric ovals

#include "graphics.h"

int main(void)
{
    // smallest to largest
    drawOval(220, 140, 60, 20);
    drawOval(200, 120, 100, 60);
    drawOval(180, 100, 140, 100);
    drawOval(160, 80, 180, 140);
    drawOval(140, 60, 220, 180);
    drawOval(120, 40, 260, 220);
    return 0;
}