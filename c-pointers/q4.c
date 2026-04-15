#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("%d\n", *(p+2));
    return 0;
}
