#include <stdio.h>
#include <stdlib.h>

typedef struct LargestAndSmallest {
    int largest;
    int smallest;
} LargestAndSmallest;

LargestAndSmallest* getLargestAndSMallest(int* arr, int size) {
    int largest = *arr;
    int smallest = *arr;

    for (int i = 0; i < size; i++) {
        if (*(arr+i) > largest) {
            largest = *(arr+i);
        }
        else if (*(arr+i) < smallest) {
            smallest = *(arr+i);
        }
    }
    LargestAndSmallest* result = malloc(sizeof(LargestAndSmallest));
    result->largest = largest;
    result->smallest = smallest;
    return result;
}

typedef struct Memory {
    char* memory;
    size_t size;
    size_t nextAvailable;
} Memory;

char* allocateMemory(Memory* memory, size_t size) {
    if (size == 0) {
        return NULL;
    }
    char* start = memory->memory + memory->nextAvailable;
    *(memory->memory + size + 1) = '\0';
    memory->nextAvailable += (size + 1);
    return start;
}


int main(void) {
    int size = 1024*1024;
    Memory* memory = malloc(sizeof(Memory));
    memory->size = size;
    memory->nextAvailable = 0;
    memory->memory = calloc(memory->size, sizeof(char));

    char* s = allocateMemory(memory, 5);
    char* f = allocateMemory(memory, 6);
    printf("%p\n", s);
    printf("%p\n", f);
    return 0;
}


