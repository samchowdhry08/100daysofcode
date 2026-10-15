/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int len1 = 0, len2 = 0, i, j, k, matched;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths differ, rotation is not possible
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Create combined = str1 + str1
    for (i = 0; i < len1; i++) {
        combined[i] = str1[i];
    }
    for (i = 0; i < len1; i++) {
        combined[len1 + i] = str1[i];
    }
    combined[len1 + len1] = '\0';

    // Check if str2 exists as a substring inside combined
    int found = 0;
    for (i = 0; i <= (2 * len1 - len2); i++) {
        matched = 1;
        for (j = 0; j < len2; j++) {
            if (combined[i + j] != str2[j]) {
                matched = 0;
                break;
            }
        }
        if (matched == 1) {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}