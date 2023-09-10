#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverseSentence(char* str);

int main() {
    char sentence[] = "Hello";
    char* reversed = reverseSentence(sentence);
    printf("%s\n", reversed);
    free(reversed); // Remember to free the allocated memory
    return 0;
}

char* reverseSentence(char* str) {
    int len = strlen(str);
    char* reversed = (char*)malloc((len + 1) * sizeof(char)); // Allocate memory for the reversed string

    if (reversed == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i]; // Reverse the characters
    }
    reversed[len] = '\0'; // Null-terminate the reversed string

    return reversed;
}