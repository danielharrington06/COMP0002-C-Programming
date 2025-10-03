// Written by Daniel Harrington
// This program displays a bar chart

#include <stdio.h>
#include <math.h>
#include "graphics.h"

int main() {
    setWindowSize(600, 400);
    foreground();
    clear();

    setStringTextSize(14);

    // Bar heights
    int heights[] = {50, 150, 130, 100, 130};

    // Bar colours
    int colours[] = {blue, green, red, yellow, pink};

    // Labels
    char* labels[] = {"CDs", "DVDs", "Books", "Clothes", "Shoes"};

    int baseY = 300;
    int barWidth = 40;
    int spacing = 60;
    int startX = 80;

    // y axis
    setColour(black);
    drawLine(60, baseY, 60, 100);  // Y-axis line

    // x axis
    setColour(black);
    drawLine(60, 300, 400, 300);

    // y axis ticks and numbers
    for (int y = 100; y <= baseY; y += 50) {
        drawLine(55, y, 60, y);  // tick mark
        char buffer[10];
        sprintf(buffer, "%d", baseY - y);  // convert height to label
        drawString(buffer, 30, y - 5);     // number
    }

    // Draw bars and labels
    for (int i = 0; i < 5; i++) {
        int x = startX + i * spacing;
        int y = baseY - heights[i];

        setColour(colours[i]);

        for (int w = 0; w < barWidth; w++) {
            drawLine(x + w, baseY, x + w, y);
        }

        setColour(black);
        drawString(labels[i], x, baseY + 25);  // lavels
    }

    // chart title
    setStringTextSize(18);
    drawString("Category Sales Chart", 180, 30);

    return 0;
}
