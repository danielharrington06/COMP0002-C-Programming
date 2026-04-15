#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 10;
    int *p = &x;
    *p = 99;
    printf("x: %d\n", *p);
}