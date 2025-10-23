// Written by Daniel Harrington
// This program animates a circle and square where the square moves

#include "graphics.h"
#include <stdbool.h>
#include <math.h>

const int SQUARE_SIZE = 50;

const int CIRC_THICK = 30;
const int BIG_CIRC_RAD = 100;

const int WINDOW_SIZE = 400;

const int DIVISIONS = 40;

void DrawSquare(int x, int y) {
    clear();
    setColour(blue);
    fillRect(x - SQUARE_SIZE/2, y - SQUARE_SIZE/2, SQUARE_SIZE, SQUARE_SIZE);
}

void DrawCircles() {
    setColour(green);
    fillArc(WINDOW_SIZE/2 - BIG_CIRC_RAD, WINDOW_SIZE/2 - BIG_CIRC_RAD, BIG_CIRC_RAD*2, BIG_CIRC_RAD*2, 0, 360);
    setColour(white);
    fillArc(WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK, WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK, (BIG_CIRC_RAD-CIRC_THICK)*2, (BIG_CIRC_RAD-CIRC_THICK)*2, 0, 360);
}

void Animate() {
    foreground();

    double radius = BIG_CIRC_RAD - CIRC_THICK*0.5;

    double x, y;
    double angle = 0;

    while (true) {
        // calc x and y
        x = WINDOW_SIZE/2 + cos(angle)*radius;
        y = WINDOW_SIZE/2 + sin(angle)*radius;

        DrawSquare(x, y);

        angle += 0.05;
        sleep(50);
    }
}

int main(void)
{
    setWindowSize(WINDOW_SIZE, WINDOW_SIZE);
    background();
    DrawCircles();
    Animate();
    return 0;
}