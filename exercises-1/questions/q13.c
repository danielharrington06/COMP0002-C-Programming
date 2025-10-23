// Written by Daniel Harrington
// This program displays a sine wave

#include "graphics.h"
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int centreLine = 150;
    int border = 20;
    double scale = 0.02048864774*2;
    int prevX = border;
    int prevY = centreLine;

    for(size_t i = 0; i < 500- (2 * border); ++i) {
        double y_dub = -75 * sin(i*scale);
        int y = (int)y_dub;
        drawLine(prevX, prevY, i+border, y+centreLine);
        prevX = i+border;
        prevY = y+centreLine;
    }
    
    drawLine(20, 150, 480, 150);
    drawLine(20, 50, 20, 250);
    return 0;
}