#include <stdbool.h>
#include <string.h>

bool checkIfPangram(char* sentence) {
    int letterCount[26] = {0}; 

    int length = strlen(sentence);
    for (int i = 0; i < length; i++) {
        char c = sentence[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            letterCount[index]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (letterCount[i] == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    char sentence[] = "the quick brown fox jumps over the lazy dog";
    bool isPangram = checkIfPangram(sentence);

    if (isPangram) {
        printf("The sentence is a pangram.\n");
    } else {
        printf("The sentence is not a pangram.\n");
    }

    return 0;
}