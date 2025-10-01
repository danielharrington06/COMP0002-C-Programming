#include "graphics.h"
#include <stdlib.h>

int main(void)
{
    // declare points
    double points[8][2] = {{-39.3, 100}, {39.3, 100}, {100, 39.3}, {100, -39.3}, {39.3, -100}, {-39.3, -100}, {-100, -39.3}, {-100, 39.3}};

    // now draw lines between them
    for(size_t i = 0; i < 8; ++i) {
        drawLine(points[i][0]+250, points[i][1]+150, points[(i+1) % 8][0]+250, points[(i+1) % 8][1]+150);
    }
}