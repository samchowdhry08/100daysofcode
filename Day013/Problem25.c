/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    double a, b, result;
    char op;

    scanf("%lf %lf %c", &a, &b, &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("%.0f\n", result);
            break;
        case '-':
            result = a - b;
            printf("%.0f\n", result);
            break;
        case '*':
            result = a * b;
            printf("%.0f\n", result);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = a / b;
                printf("%.0f\n", result);
            }
            break;
        case '%':
            if ((int)b == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", (int)a % (int)b);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}