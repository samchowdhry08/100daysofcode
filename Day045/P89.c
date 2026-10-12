/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100], target;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to count: ");
    scanf(" %c", &target);

    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", target, count);

    return 0;
}