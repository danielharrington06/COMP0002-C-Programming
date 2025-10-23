// Written by Daniel Harrington
// Spiral pattern

#include "graphics.h"
#include <math.h>

int main(void)
{
    int x_centre = 400;
    int y_centre = 400;

    setWindowSize(x_centre*2, y_centre * 2);

    double radius = 0;
    double radians = 0;
    while (radius < y_centre* 1.5) {
        int x_pos = x_centre + (radius * cos(radians));
        int y_pos = y_centre + (-radius * sin(radians));

        drawRect(x_pos, y_pos, 1, 1);

        radius = radius + 0.4;
        radians = radians + 0.1;
    }
    return 0;
}