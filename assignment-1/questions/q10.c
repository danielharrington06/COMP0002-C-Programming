// Written by Daniel Harrington 02/10/2025
// This program draws a flower and a poppy

#include "graphics.h"

int main(void)
{
    // flower
    drawArc(80, 100, 30, 30, 0, 360); //flower centre
    setColour(blue);
    drawOval(30, 100, 50, 30);
    setColour(orange);
    drawOval(110, 100, 50, 30);
    setColour(pink);
    drawOval(80, 50, 30, 50);
    setColour(magenta);
    drawOval(80, 130, 30, 50);
    setColour(green);
    drawArc(75, 130, 50, 300, 0, 90);
    return 0;
}