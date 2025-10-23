// Written by Daniel Harrington 02/10/2025
// This program creates a rainbwow

#include "graphics.h"

int main(void)
{
    //ground
    drawLine(0, 250, 499, 250);

    //rainbow
    setColour(red);
    drawArc(50, 50, 400, 400, 0, 180);
    setColour(orange);
    drawArc(65, 65, 370, 370, 0, 180);
    setColour(yellow);
    drawArc(80, 80, 340, 340, 0, 180);
    setColour(green);
    drawArc(95, 95, 310, 310, 0, 180);
    setColour(blue);
    drawArc(110, 110, 280, 280, 0, 180);
    setColour(magenta);
    drawArc(125, 125, 250, 250, 0, 180);
    setColour(pink);
    drawArc(140, 140, 220, 220, 0, 180);
    return 0;
}