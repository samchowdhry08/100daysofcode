/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

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

    i = 0;
    int newWord = 1;   // flag: are we at the start of a word?

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (newWord == 1) {
                printf("%c.", str[i]);
                newWord = 0;
            }
        } else {
            newWord = 1;   // next non-space character starts a new word
        }
        i++;
    }

    printf("\n");

    return 0;
}