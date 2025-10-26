/* Written by Daniel Harrington
This program contains a function to create a return a pointer to a ragged 2d array
a ragged 2d array 2d array has rows of different lengths
*/

#include <malloc.h>

int** create_ragged_2Darray(int numRow, int* rowLengths) {
    int** ragged2DArray = malloc(numRow * sizeof(int*));
    if (ragged2DArray == NULL) return NULL;

    for (int i = 0; i < numRow; i++) {
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

void free_ragged_array(int** raggedArray) {

}

int main(void)
{
    int rowLengths[] = {1, 2, 3, 4, 5};
    int length = 5;

    int** pascalTriangle = create_ragged_2Darray(length, rowLengths);
    if (pascalTriangle == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    

    return 0;
}