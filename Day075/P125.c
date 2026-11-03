/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    int i = 0;

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error: could not open data.txt\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Remove the newline left by fgets
    while (text[i] != '\0') {
        if (text[i] == '\n') {
            text[i] = '\0';
            break;
        }
        i++;
    }

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}