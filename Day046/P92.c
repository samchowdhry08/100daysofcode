/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count occurrences of each lowercase letter
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
        i++;
    }

    // Find the first character (left to right) that repeats
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            printf("First repeating character = %c\n", str[i]);
            return 0;
        }
        i++;
    }

    printf("No repeating character found\n");

    return 0;
}