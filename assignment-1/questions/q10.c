// Written by Daniel Harrington 02/10/2025
// This program draws a flower and a poppy

#include "graphics.h"

int main(void)
{
    // flower
    setColour(blue);
    fillArc(35, 95, 60, 40, 0, 360); //left
    setColour(orange);
    fillArc(105, 95, 60, 40, 0, 360); //right
    setColour(pink);
    fillArc(80, 45, 40, 60, 0, 360); // top
    setColour(magenta);
    fillArc(80, 125, 40, 60, 0, 360); //bottom
    setColour(green);
    drawArc(60, 120, 75, 300, 0, 75); // stem
    setColour(black);
    fillArc(85, 100, 30, 30, 0, 360); //flower centre

    //poppy
    setColour(red);
    fillArc(230, 100, 70, 120, 0, 360); // left 
    fillArc(270, 100, 70, 120, 0, 360); //right
    setColour(black);
    fillArc(260, 135, 50, 50, 0, 360); // flower centre
    setColour(green);
    drawLine(285, 210, 285, 275); // stem
    return 0;
}