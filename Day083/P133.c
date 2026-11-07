/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                     "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    char input[10];
    int i, found = -1;
    enum Month m;

    printf("Enter month (JAN, FEB, ... DEC): ");
    scanf("%s", input);

    // Convert the typed name into its enum value
    for (i = 0; i < 12; i++) {
        if (strcmp(input, names[i]) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid month\n");
        return 0;
    }

    m = (enum Month)found;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}