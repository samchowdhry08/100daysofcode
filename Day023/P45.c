/*
Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        double numerator = 2.0 * k;
        double denominator = 4.0 * k - 1;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}