/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int n;
    char binary[33];
    int index = 0;

    printf("Enter Numbers: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n /= 2;
    }

    // digits were collected in reverse, so print backwards
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
    printf("\n");

    return 0;
}