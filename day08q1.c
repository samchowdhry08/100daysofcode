/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
#include <stdio.h>
int main()
{
    char input;
    printf("Enter the charachter = ");
    scanf(" %c",&input);
    if ('A'<=input && input<='Z')
    {
        printf("The charachter is uppercase alphabet");
    }
    else if('a'<=input && input<='z')
    {
        printf("The charachter is lowercase alphabet");
    }
    else if('0'<=input && input<='9')
    {
        printf("The charachter is a digit");
    }
    else
    {
        printf("The charachter is a special charachter");
    }
    return 0;
}