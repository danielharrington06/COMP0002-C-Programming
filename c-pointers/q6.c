#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int size = 5;
    int* arr = malloc(size*sizeof(int));

    for (int i = 0; i < size; i++) {
        *(arr+i) = i+1;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;
}
