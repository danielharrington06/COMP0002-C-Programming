// Written by Daniel Harrington
// This program draws a chequerboard with a bounching ball

#include "graphics.h"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

#define PI 3.141592653589793

const int WINDOW_SIZE = 600;
const int SQUARE_SIZE = WINDOW_SIZE / 10;
const int BALL_RAD = WINDOW_SIZE / 20;

const int time_interval = 1000/60;

const int VELOCITY = 10 * WINDOW_SIZE/60;

void DrawChequerboard() {
    background();
    setColour(black);

    for (int x = 0; x < WINDOW_SIZE; x+=SQUARE_SIZE) {
        for (int y = 0; y < WINDOW_SIZE; y+=SQUARE_SIZE) {
            if ((x + y) % (2*SQUARE_SIZE) == 0) { // only fill alternating squares
                fillRect(x, y, SQUARE_SIZE, SQUARE_SIZE);
            }
        }
    }
}

void DrawBall(int x, int y) { // x, y specify centre of ball
    clear();
    setColour(red);
    fillArc((int)x-BALL_RAD, (int)y-BALL_RAD, BALL_RAD*2, BALL_RAD*2, 0, 360);
}

double RandomiseAngleRad() {
    int r = rand(); // pseudo random int between 0 and 32767
    int deg = 10 + (r % 71); // angle between 10 and 80
    double rad = (deg*PI)/180.0;
    return rad;
}

void TranslateBall(double *x, double *y, double Vx, double Vy) {
    // divide by time_interval so that velocity represents number of pixels moved in second
    // therefore each interval, need to move velocity/time_interval
    *x = *x + Vx/time_interval;
    *y = *y + Vy/time_interval;
}

// collision with wall such as: |
void DealWithCollisionVertWall(double *Vx, double *Vy) {
    *Vx *= -1; // flip horizontal direction

    double angle = RandomiseAngleRad();

    // find resultant x velocity
    if (*Vx <= 0) { // going left now
        *Vx = -VELOCITY*sin(angle);
    }
    else { // going right now
        *Vx = VELOCITY*sin(angle);
    }

    // find resultant y velocity
    if (*Vy <= 0) { // going up
        *Vy = -VELOCITY*cos(angle);
    }
    else { // going down
        *Vy = VELOCITY*cos(angle);
    }
}

// collision with wall such as: _
void DealWithCollisionHorzWall(double *Vx, double *Vy) {
    *Vy *= -1; //flip vertical direction

    double angle = RandomiseAngleRad();

    // find resultant x velocity
    if (*Vx <= 0) { // going left
        *Vx = -VELOCITY*cos(angle);
    }
    else { // going right
        *Vx = VELOCITY*cos(angle);
    }

    // find resultant y velocity
    if (*Vy <= 0) { // going up now
        *Vy = -VELOCITY*sin(angle);
    }
    else { // going down now
        *Vy = VELOCITY*sin(angle);
    }
}

void CheckCollisions(double *x, double *y, double *Vx, double *Vy) {
    // in each case, if its a hit, deal with the collision then reset the ball to avoid glitching

    if (*x <= BALL_RAD ) { // left wall hit
        DealWithCollisionVertWall(Vx, Vy);
        *x = BALL_RAD + 1;
    }
    else if (*x >= WINDOW_SIZE - BALL_RAD) { // right wall hit
        DealWithCollisionVertWall(Vx, Vy);
        *x = WINDOW_SIZE - BALL_RAD - 1;
    }

    // needs to be another if to account for a hit in the corner

    if (*y <= BALL_RAD) { // top wall hit
        DealWithCollisionHorzWall(Vx, Vy);
        *y = BALL_RAD + 1;
    }
    else if (*y >= WINDOW_SIZE - BALL_RAD) { // bottom wall hit
        DealWithCollisionHorzWall(Vx, Vy);
        *y = WINDOW_SIZE - BALL_RAD - 1;
    }
}

void AnimateBall() {
    foreground();

    srand(time(NULL)); // seed random function with time

    // initialise values for x, y, and Vx, Vy
    double x = WINDOW_SIZE/2;
    double y = WINDOW_SIZE/2;

    double r = RandomiseAngleRad(); // random angle to make starts different
    double Vx = VELOCITY*cos(r);
    double Vy = VELOCITY*sin(r);

    while (true) {
        DrawBall(x, y);
        TranslateBall(&x, &y, Vx, Vy); // only values of velocity as they do not need to be changed or passed to other functions
        CheckCollisions(&x, &y, &Vx, &Vy);
        sleep(time_interval);
    } 
}

int main(void)
{
    setWindowSize(WINDOW_SIZE, WINDOW_SIZE);
    DrawChequerboard();
    AnimateBall();
    return 0;
}