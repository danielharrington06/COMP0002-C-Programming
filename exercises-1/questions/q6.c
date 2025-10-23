// Written by Daniel Harrington 01/10/2025
// This programs draws a centered square then a circle around it
#include "graphics.h"

int main(void)
{
    drawRect(250-70.7, 150-70.7, 141.4, 141.4); // coordinates found by using trig and considering diagonal length of square is 200
    drawArc(150, 50, 200, 200, 0, 360);
    return 0;
}