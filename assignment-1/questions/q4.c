// Written by Daniel Harrington 01/10/202
// This program displays a heptagon
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
    Point points[7] = {{0, 100}, {39.3, 100}, {100, 39.3}, {100, -39.3}, {39.3, -100}, {-39.3, -100}, {-100, -39.3}};
    // i calculated the coordinates of the points by using complex numbers Re^(pi i) form and the n'th roots in order to rotate a...
    //... number about the origin

    // now draw lines between them
    for(size_t i = 0; i < 7; ++i) {
        drawLine(points[i].x+250, points[i].y+150, points[(i+1) % 8].x+250, points[(i+1) % 8].y+150);
    }
    return 0;
}