#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

typedef struct Node {
    char* value;
    struct Node* next;
} Node;

Node* newNode(char* string) {
    Node* new = malloc(sizeof(Node));
    char* stringCopy = calloc(sizeof(char), strlen(string)+1);
    strcpy(stringCopy, string);
    new->value = stringCopy;
    new->next = NULL;
    return new;
}

Node* convertStringArrayToLL(char* strings[], int size) {
    Node* head = newNode(strings[0]);
    if (head == NULL) {
        printf("allocation failed for LL");
        return NULL;
    }
    Node* prev = head;
    for (int i = 1; i < size; i++) {
        Node* curr = newNode(strings[i]);
        if (curr == NULL) {
            printf("allocation failed for LL");
            // free it
            return NULL;
        }
        prev->next = curr;
        prev = curr;
    }
    return head;
}

void deleteLinkedList(Node* start) {
    Node* curr = start;
    while (curr != NULL) {
        Node* next = curr->next;
        free(curr->value);
        free(curr);
        curr = next;
    }
    return;
}

int main(int argc, char const *argv[])
{
    char* strings[] = {"hi", "how are you", "whats up", "how you doing"};
    Node* head = convertStringArrayToLL(strings, 4);
    Node* curr = head;
    for (int i = 0; i < 4; i++) {
        printf("%s\n", curr->value);
        curr = curr->next;
    }
    deleteLinkedList(head);
    return 0;
}
