#include <stdio.h>
#include <stdlib.h>

void output_int_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr+i));
    }
    printf("\n");
}

int main(void) {
    int size = 8;
    int* arr = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        *(arr+i) = i+1;
    }

    printf("%ld\n",(long)arr);
    output_int_array(arr, size);
    
    size = 10000;
    arr = realloc(arr, size);
    printf("%ld\n",(long)arr);

    output_int_array(arr, size);
    return 0;
}