#include <stdio.h>

void apply(int* arr, int size, void (*fn)(int*)) {
    for (int i = 0; i < size; i++) {
        fn(&arr[i]);
    }
}

void square(int *x) { *x = (*x) * (*x); }

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    apply(arr, 5, square);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
