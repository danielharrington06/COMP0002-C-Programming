#include <stdio.h>
#include <stdlib.h>

int countChar(char* string, char c) {
    int i = 0;
    int count = 0;
    while (*(string+i) != '\0') {
        if (*(string+i) == c) {
            count++;
        }
        i++;
    }
    return count;
}

int* countVowels(char* string) {
    int numVowels = 5;
    const char* vowels = "aeiou";
    int* counts = malloc(5 * sizeof(int));
    for (int i = 0; i < numVowels; i++) {
        *(counts + i) = countChar(string, *(vowels+i));
    }
    return counts;
}

int main(int argc, char const *argv[])
{
    char *s = malloc(100);
    printf("Please enter a string: ");
    scanf(" %99[^\n]", s);
    int* vowels = countVowels(s);
    printf("Vowel distribution:\n");
    printf("a: %d \t e: %d \t i: %d \t o: %d \t u: %d \n", vowels[0], vowels[1], vowels[2], vowels[3], vowels[4]);

    return 0;
}
