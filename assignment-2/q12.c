// Written by Daniel Harrington
// This program shows sin(x), cos(x) and tan(x) from -360 to 360 on axes

#include "graphics.h"
#include <math.h>
#include <stdio.h>

int main(void)
{
    setWindowSize(750, 500);
    drawLine(5, 250, 745, 250); // x axis
    drawLine(375, 5, 375, 495); // y axis

    for (int i = -360; i <= 720; i++) {
        double rad = i * (M_PI / 180);

        double ySin = sin(rad);
        double yCos = cos(rad);
        double yTan = tan(rad);

        // now find pixel positions
        int ySin_pos = (-ySin * 100) + 250;
        int yCos_pos = (-yCos * 100) + 250;
        int yTan_pos = (-yTan * 100) + 250;

        setColour(red);
        drawRect(i, ySin_pos, 1, 1);
        setColour(blue);
        drawRect(i, yCos_pos, 1, 1);
        setColour(green);
        drawRect(i, yTan_pos, 1, 1);
    }
    return 0;
}