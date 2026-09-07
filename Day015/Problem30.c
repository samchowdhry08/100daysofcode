/*
Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main(){
    int n , reversed =0;
    int number;
    printf("Enter number: ");
    scanf("%d", &n);

    number=n;

    while (n!=0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reverse of %d is %d \n",number, reversed);
    return 0;
}