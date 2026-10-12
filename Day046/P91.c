/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        ch = str[i];

        // Check if character is a vowel (both cases)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            // skip vowel, don't copy
        } else {
            result[j] = ch;
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("String without vowels = %s\n", result);

    return 0;
}