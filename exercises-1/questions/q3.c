// Written by Daniel Harrington 01/10/202
// This program displays an octogon
#include "graphics.h"
#include <stdlib.h>

int main(void)
{
    // defome Point for use of storing octagon points
    typedef struct {
        double x;
        double y;
    } Point;

    // declare points
    Point points[8] = {{-39.3, 100}, {39.3, 100}, {100, 39.3}, {100, -39.3}, {39.3, -100}, {-39.3, -100}, {-100, -39.3}, {-100, 39.3}};

    // now draw lines between them
    for(size_t i = 0; i < 8; ++i) {
        drawLine(points[i].x+250, points[i].y+150, points[(i+1) % 8].x+250, points[(i+1) % 8].y+150);
    }
    return 0;
}