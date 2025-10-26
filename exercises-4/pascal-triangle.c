/* Written by Daniel Harrington
This program contains a function to create a return a pointer to a ragged 2d array
a ragged 2d array 2d array has rows of different lengths
Extension: use this to create pascals triangle
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

int** create_pascal_triangle(int numRows) {

    if (numRows <= 0) return NULL;

    int rowLengths[numRows];
    for (int i = 0; i < numRows; i++) {
        rowLengths[i] = i+1;
    }

    int** pascalTriangle = create_ragged_2Darray(numRows, rowLengths);
    if (pascalTriangle == NULL) {
        printf("Memory allocation failed when making pascal triangle\n");
        return NULL;
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < rowLengths[i]; j++) {
            if (j == 0 || j == rowLengths[i]-1) {
                // start of end value - set to 1
                pascalTriangle[i][j] = 1;
            }
            else {
                // else set as sum of above two
                pascalTriangle[i][j] = pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j];
            }
        }
    }
    return pascalTriangle;
}

void output_pascal_triangle(int** pascalTriangle, int numRow) {
    for (int i = 0; i < numRow; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%d ", pascalTriangle[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{   
    int num = 0;
    printf("To which Pascal Triangle row would you like to go to: ");
    scanf("%d", &num);
    num++; // pascal triangle starts counting on 0th row

    int** pascalTriangle = create_pascal_triangle(num);
    if (pascalTriangle == NULL) return 1;
    
    output_pascal_triangle(pascalTriangle, num);
    free(pascalTriangle);

    return 0;
}