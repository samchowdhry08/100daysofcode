/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Remove the newline character left by fgets (if it's there)
    if (str[i] == '\n') {
        str[i] = '\0';
    } else {
        str[i] = '\0';
    }

    printf("Modified string = %s\n", str);

    return 0;
}