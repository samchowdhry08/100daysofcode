/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char str[100];
    char words[20][30];   // store up to 20 words, each max 29 chars
    int wordCount = 0;
    int i = 0, j = 0;

    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Split into words manually
    i = 0;
    j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            words[wordCount][j] = str[i];
            j++;
        } else {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }
    words[wordCount][j] = '\0';   // last word
    wordCount++;

    // Print initials for all words except the last, then full last word
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", words[i][0]);
    }
    printf(" %s\n", words[wordCount - 1]);

    return 0;
}