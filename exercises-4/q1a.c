// Written by Daniel Harrington
// This program animates a circle and square where the square moves

#include "graphics.h"
#include <stdbool.h>

const int SQUARE_SIZE = 50;

const int CIRC_THICK = 30;
const int BIG_CIRC_RAD = 100;

const int WINDOW_SIZE = 400;

const int PATH_SIZE = (BIG_CIRC_RAD - 0.5*CIRC_THICK) * 2;
const int CO_ORDS[4][2] = {{WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5, WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5},
                        {WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5 + PATH_SIZE, WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5},
                        {WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5 + PATH_SIZE, WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5 + PATH_SIZE},
                        {WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5, WINDOW_SIZE/2 - BIG_CIRC_RAD + CIRC_THICK*0.5 + PATH_SIZE}};
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

    double x = CO_ORDS[0][0];
    double y = CO_ORDS[0][1];

    int k = 0;

    while (true) {
        int x_dif = CO_ORDS[(k+1) % 4][0] - CO_ORDS[k % 4][0];
        int y_dif = CO_ORDS[(k+1) % 4][1] - CO_ORDS[k % 4][1];

        double x_incr = (double)x_dif / (double)DIVISIONS;
        double y_incr = (double)y_dif / (double)DIVISIONS;

        for (int i = 0; i < DIVISIONS; i++) {
            x += x_incr;
            y += y_incr;
            DrawSquare((int)x, (int)y);
            sleep(50);
        }
        x = CO_ORDS[(k+1) % 4][0];
        y = CO_ORDS[(k+1) % 4][1];

        k++;

        k = k % 4;
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