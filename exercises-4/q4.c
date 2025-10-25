// Written by Daniel Harrington
// This program checks if the string pointed to by t occurs at the end of the string pointed to by s

// An example of this is:
// s = "Hello world" and t  = "world" and t is actually at the end of s

#include <string.h>
#include <stdio.h>

// version i wrote works by iterating through until pointers are equal
// at this point, if they are ever equal, then the rest of the string must be equal 
// as they will both run until null terminator
int strend1(char *s, char *t) {
    char *ptr = s; // pointer to start of s, but will move along

    size_t s_len = strlen(s);

    for (int i = 0; i < s_len; i++) {
        if (ptr == t) {
            return 1;
        }
        ptr++;
    }
    return 0;
}

// "better" version by chatgpt
int strend2(char *s, char *t) {
    int s_len = strlen(s);
    int t_len = strlen(t);

    if (s_len < t_len) {
        return 0; // t cannot be at the end of s if t is longer than s
    }

    // change s to be where it would have to be to match t
    s += s_len - t_len;

    //printf("%s %s\n", s, t);
    return strcmp(s, t) == 0; // compare new s with t - strcmp is 0 when equal
}

int main(void)
{
    char *a = "Hello world";
    char *b = &a[6];

    if (strend1(a, b)) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    return 0;
}