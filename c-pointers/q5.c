#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 7;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
