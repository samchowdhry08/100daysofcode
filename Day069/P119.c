/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() {
    int seen[1000] = {0};
    int x, found = 0;
    char ch;

    printf("Enter elements (press Enter when done): ");

    while (scanf("%d", &x) == 1) {
        if (seen[x] == 1) {
            printf("%d\n", x);
            found = 1;
            break;
        }
        seen[x] = 1;

        // Skip spaces after the number
        do {
            ch = getchar();
        } while (ch == ' ');

        if (ch == '\n' || ch == EOF) {
            break;
        }

        // ch is the first digit of the next number, put it back
        ungetc(ch, stdin);
    }

    if (found == 0) {
        printf("-1\n");
    }

    return 0;
}