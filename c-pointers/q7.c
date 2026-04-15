#include <stdio.h>

void double_largest(int* arr, int size) {
    int max_i = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_i]) {
            max_i = i;
        }
    }
    arr[max_i] *= 2;
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int arr[] = {3, 17, 8, 42, 5};
    double_largest(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
