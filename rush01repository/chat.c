#include <stdio.h>
#include <stdlib.h>

// Function to split the string by space and return an array of strings
char** splitStringBySpace(const char* input, int* numWords) {
    int strLen = 0;
    int wordCount = 1; // Assuming at least one word exists (even for empty string)
    
    // Count the number of words in the string
    while (input[strLen] != '\0') {
        if (input[strLen] == ' ') {
            wordCount++;
        }
        strLen++;
    }
    
    // Allocate memory for the array of pointers to store individual words
    char** wordsArray = (char**)malloc(wordCount * sizeof(char*));
    if (wordsArray == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    int wordStart = 0;
    int wordIndex = 0;

    // Extract each word from the string and store in the array
    for (int i = 0; i <= strLen; i++) {
        if (input[i] == ' ' || input[i] == '\0') {
            int wordLen = i - wordStart;
            
            // Allocate memory for the word and copy it from the input string
            wordsArray[wordIndex] = (char*)malloc((wordLen + 1) * sizeof(char));
            if (wordsArray[wordIndex] == NULL) {
                printf("Memory allocation failed.\n");
                exit(EXIT_FAILURE);
            }

            for (int j = 0; j < wordLen; j++) {
                wordsArray[wordIndex][j] = input[wordStart + j];
            }

            // Null-terminate the word
            wordsArray[wordIndex][wordLen] = '\0';
            
            // Move to the next word
            wordStart = i + 1;
            wordIndex++;
        }
    }

    // Set the number of words in the output parameter and return the array
    *numWords = wordCount;
    return wordsArray;
}

// Function to free the memory allocated for the array of strings
void freeWordsArray(char** wordsArray, int numWords) {
    for (int i = 0; i < numWords; i++) {
        free(wordsArray[i]);
    }
    free(wordsArray);
}

int main() {
    const char* inputString = "Split this C string by spaces";
    int numWords = 0;
    char** wordsArray = splitStringBySpace(inputString, &numWords);

    printf("Number of words: %d\n", numWords);
    for (int i = 0; i < numWords; i++) {
        printf("Word %d: %s\n", i + 1, wordsArray[i]);
    }

    // Don't forget to free the memory
    freeWordsArray(wordsArray, numWords);

    return 0;
}
