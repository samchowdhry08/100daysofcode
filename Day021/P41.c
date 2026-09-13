/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, firstDigit, lastDigit, digits, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    firstDigit = n / (int)pow(10, digits - 1);
    
    result = n - firstDigit * (int)pow(10, digits - 1); // remove first digit
    result = result / 10;                                 // remove last digit
    result = result * 10 + firstDigit;                    // put old first digit as new last digit
    result = result + lastDigit * (int)pow(10, digits - 1); // put old last digit as new first digit

    printf("%d\n", result);

    return 0;
}