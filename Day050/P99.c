/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    int i;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    // Print day (first 2 characters)
    for (i = 0; i < 2; i++) {
        printf("%c", date[i]);
    }

    printf("-Apr-");

    // Print year (characters from index 6 onwards)
    i = 6;
    while (date[i] != '\0') {
        printf("%c", date[i]);
        i++;
    }

    printf("\n");

    return 0;
}