/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0;
    char temp;

    printf("Enter a sentence: ");
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
    start = 0;

    while (1) {
        // Move to end of current word or end of string
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;

            // Reverse the word from 'start' to 'end'
            int a = start, b = end;
            while (a < b) {
                temp = str[a];
                str[a] = str[b];
                str[b] = temp;
                a++;
                b--;
            }

            start = i + 1;   // next word starts after the space

            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }

    printf("Reversed words = %s\n", str);

    return 0;
}