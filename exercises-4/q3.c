// Written by Daniel Harrington
// This program is a version of the string copy function that takes a 
// single string argument and creates a new copy in dynamic (heap) memory 
// using malloc

#include <malloc.h>
#include <string.h>

char* stringCopy(char *s) {
    // deal with null s
    if (s == NULL) return NULL;

    size_t sLen = strlen(s);
    char *copy = malloc(sLen + 1); // +1 for null terminator

    // deal with null memory allocation
    if (copy == NULL) return NULL;

    for (size_t i = 0; i <= sLen; i++) { // <= to copy null terminator
        copy[i] = s[i]; // copy chars including null terminator
    }

    return copy; // returns pointer to copy which is on heap
}

int main(void) 
{
    char *original = "Hello, this will be on Heap!";
    char *copy = stringCopy(original);

    if (copy == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
    }
    else {
        printf("Copied string: %s\n", copy);
        free(copy);
    }
    return 0;
}