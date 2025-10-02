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

    int numPoints;
    numPoints = 7;

    // declare points
    Point points[7] = {{100, 0}, {62.3, 78.2}, {-22.3, 97.5}, {-90.1, 43.4}, {-90.1, -43.4}, {-22.3, -97.5}, {62.3, -78.2}};
    // i calculated the coordinates of the points by using complex numbers Re^(pi i) form and the n'th roots in order to rotate a...
    //... number about the origin

    // now draw lines between them
    for(size_t i = 0; i < numPoints; ++i) {
        drawLine(points[i].x+250, points[i].y+150, points[(i+1) % numPoints].x+250, points[(i+1) % numPoints].y+150);
    }
    return 0;
}