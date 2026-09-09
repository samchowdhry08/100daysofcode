/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digit, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    // counting number of digits
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // sum of each digit raised to power of digit count (logic for armstrong num)
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}