/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[200];
    char longest[100], current[100];
    int i = 0, j = 0, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    longest[0] = '\0';   // empty initially

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            // Build current word
            current[j] = str[i];
            j++;
        } else {
            // Word ended, terminate it
            current[j] = '\0';

            // Compare lengths manually
            int len_current = j;
            int len_longest = k;

            if (len_current > len_longest) {
                // Copy current into longest
                int m;
                for (m = 0; m <= len_current; m++) {
                    longest[m] = current[m];
                }
                k = len_current;
            }
            j = 0;   // reset for next word
        }
        i++;
    }

    // Check the last word (no space/newline after it)
    current[j] = '\0';
    if (j > k) {
        int m;
        for (m = 0; m <= j; m++) {
            longest[m] = current[m];
        }
    }

    printf("Longest word = %s\n", longest);

    return 0;
}