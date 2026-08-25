/*
Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum=%d \n", sum);

    return 0;
}