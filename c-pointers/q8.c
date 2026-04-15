#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int rows = 3, cols = 4;
    int **arr = malloc(rows * sizeof(int*));
    for (int i = 0; i< rows; i++) {
        *(arr+i) = malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            *(*(arr+i)+j) = i*10 + j;
        }
    }

    for (int i = 0; i< rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
