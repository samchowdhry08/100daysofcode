/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, j, k;
    int first = 1;   // To avoid printing a comma before the first substring

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // i = start index, j = end index
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (first == 0) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }

    printf("\n");

    return 0;
}
