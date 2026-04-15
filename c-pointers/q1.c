#include <stdio.h>

int main (int argc, char *argv[]) {
    int score = 42;
    int *p = &score;
    printf("Score: %d\n", *p);
    return 0;
}