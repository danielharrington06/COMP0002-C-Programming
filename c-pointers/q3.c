#include <stdio.h>

void double_it(int* x) {
    *x = *x * 2;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    double_it(&n);
    printf("%d\n", n);
    return 0;
}
