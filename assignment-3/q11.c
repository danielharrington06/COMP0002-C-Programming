// Written by Daniel Harrington
// This program displays a pattern with + symbols

#include "graphics.h"
#include <stdio.h>

const int WINDOW_WIDTH = 400;
const int SQUARE_WIDTH = WINDOW_WIDTH / 20;
int s_colour = 0; // 0 is blue, 1 is yellow

void NextSquare(int *x, int *y) {
    *x = (*x + SQUARE_WIDTH);
    if (*x >= WINDOW_WIDTH) {
        *x = 0;
        *y += SQUARE_WIDTH;
    }
}

void DrawSquare(int *x, int *y, int offset) {
    if (!s_colour) { // blue
        setColour(blue);
    }
    else { // yellow
        setColour(yellow);
    }

    fillRect((*x + *y*-3+2000)%WINDOW_WIDTH, *y, SQUARE_WIDTH, SQUARE_WIDTH);

    NextSquare(x, y);
}

void SwapColour() {
    s_colour = 1 - s_colour;
}

int main()
{
    int x = 0;
    int y = 0;

    setWindowSize(WINDOW_WIDTH, WINDOW_WIDTH);

    // pattern is 3, 1, 1
    int offset = 0;
    for (int i = 0; i < 400; i++) {
        if ((i % 5) < 3) {
            for (int j = 0; j < 3; j++) {
                DrawSquare(&x, &y, offset);
            }
            i = i + 2;
            SwapColour();
        }
        else {
            DrawSquare(&x, &y, offset);
            SwapColour();
        }
    }
    
    return 0;
}
