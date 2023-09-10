#include <stdio.h>
#include <string.h>

char* LongestEvenWord(char* sentence) {
    char* longestWord = NULL;
    int longestLength = 0;

    char* token = strtok(sentence, " ");
    while (token != NULL) {
        int length = strlen(token);
        if (length % 2 == 0 && length > longestLength) {
            longestWord = token;
            longestLength = length;
        }
        token = strtok(NULL, " ");
    }

    return longestWord;
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
 // Remove the trailing newline character
    sentence[strcspn(sentence, "\n")] = '\0';

    char* longestEvenWord = LongestEvenWord(sentence);

    if (longestEvenWord != NULL) {
        printf("Longest even word: %s\n", longestEvenWord);
    } else {
        printf("No even word found.\n");
    }

    return 0;
}