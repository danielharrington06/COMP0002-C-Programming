/* Written by Daniel Harrington
This program contains a function to create a return a pointer to a ragged 2d array
a ragged 2d array 2d array has rows of different lengths
*/

#include <malloc.h>

int** create_ragged_2Darray(int numRow, int* rowLengths) {
    if (numRow <= 0) {
        printf("Nonpositive number of rows given\n");
        return NULL;
    }

    int** ragged2DArray = malloc(numRow * sizeof(int*));
    if (ragged2DArray == NULL) return NULL;

    for (int i = 0; i < numRow; i++) {
        if (rowLengths[i] <= 0) {
            printf("Nonpositive row length given\n");
            // free already allocated memory if non positive row length
            for (int j = 0; j < i-1; j++) { // i - 1 because this row not allocated yet
                free(ragged2DArray[j]);
            }
            free(ragged2DArray);
            return NULL;
        }
        ragged2DArray[i] = malloc(rowLengths[i] * sizeof(int));
        if (ragged2DArray[i] == NULL) {
            // free already allocated memory if allocation fails
            for (int j = 0; j < i; j++) {
                free(ragged2DArray[j]);
            }
            free(ragged2DArray);
            return NULL;
        }
    }
    return ragged2DArray;
}

void free_ragged_array(int** ragged2DArray, int numRow, int* rowLengths) {
    for (int i = 0; i < numRow; i++) {
        free(ragged2DArray[i]);
    }
    free(ragged2DArray);
}

int main(void)
{
    int rowLengths[] = {3, 4, 5};
    int length = 3;
    
    int** ragged2DArray = create_ragged_2Darray(length, rowLengths);
    if (ragged2DArray == NULL) return 1;

    free(ragged2DArray);

    printf("Ragged 2D Array created and freed without error.\n");
    return 0;
}