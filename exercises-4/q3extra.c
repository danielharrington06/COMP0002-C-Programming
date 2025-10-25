// Written by Daniel Harrington
// This program uses malloc to see how it does not initalise values

#include <malloc.h>

void randomInts(int n) {
    int *arr = malloc((n+1) * sizeof(int));
    if (arr == NULL) return;
    printf("Uninitialised values from malloc:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    free(arr);
}

int main(void)
{
    randomInts(5);
    return 0;
}