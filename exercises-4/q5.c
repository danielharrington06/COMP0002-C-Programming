// Written by Daniel Harrington
// This program bubble sorts an array of integers

#include <malloc.h>

int* bubbleSort(int *original, int size) {
    if (size == 0) return NULL; // check for length 0

    int *sorted = malloc(size * sizeof(int));

    if (sorted == NULL) return NULL;

    for (int i = 0; i < size; i++) {
        sorted[i] = original[i]; // copy elements to sorted array
    }

    int swapMade = 1;
    int pass = 0;

    // continue while there has been at least one swap made and there is not just 1 item left
    while (swapMade && pass < size - 1) {  
        swapMade = 0;
        for (int i = 0; i < size - pass - 1; i++) {
            if (sorted[i] > sorted[i+1]) { // out of order, so swap
                int temp = sorted[i+1];
                sorted[i+1] = sorted[i];
                sorted[i] = temp;
                swapMade = 1;
            }
        }
        pass++;
    }

    return sorted;
}

int main(void)
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = 9;

    int *sorted = bubbleSort(arr, length);

    if (sorted == NULL) { // check for NULL returned from bubbleSort
        printf("NULL returned from bubble sort");
        return 1; // non zero return
    }
    for (int i = 0; i < length; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");
    free(sorted);
    return 0;
}