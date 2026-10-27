/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main() {
    char s[100];
    int len = 0, i, j, k;
    int maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    // Find length manually
    while (s[len] != '\0') {
        len++;
    }

    // i = start of window
    for (i = 0; i < len; i++) {
        // j = end of window, extend while no repeat
        for (j = i; j < len; j++) {
            int repeated = 0;

            // Check if s[j] already appears in s[i..j-1]
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1) {
                break;   // window can't grow further from this start
            }

            if (j - i + 1 > maxLen) {
                maxLen = j - i + 1;
            }
        }
    }

    printf("%d\n", maxLen);

    return 0;
}