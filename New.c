#include <stdio.h>

#define MAX_CHAR 26 // For English letters

void countCharacterFrequency(const char *str, int freq[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase manually
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A'); // Convert to lowercase
        }

        // Count only alphabetical characters
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Increment the corresponding index
        }
    }
}

void printFrequency(const int freq[]) {
    printf("Character Frequencies:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }
}

int main() {
    char str[1000]; // Buffer for input string
    int freq[MAX_CHAR] = {0}; // Initialize frequency array with 0

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string

    countCharacterFrequency(str, freq);
    printFrequency(freq);

    return 0;
}
