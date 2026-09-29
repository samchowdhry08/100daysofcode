/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int count[10] = {0};

    // Handle negative numbers (ignore sign)
    if (num < 0) num = -num;

    // Edge case: if number is 0
    if (num == 0) count[0] = 1;

    long long temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    int maxCount = 0, result = 0;
    for (int d = 0; d <= 9; d++) {
        if (count[d] > maxCount) {
            maxCount = count[d];
            result = d;
        }
    }

    printf("Most frequent digit: %d\n", result);

    return 0;
}