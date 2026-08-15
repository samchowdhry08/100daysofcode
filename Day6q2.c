/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    printf("Enter the integer : ");
    scanf("%d",&input);
    if (input>0)
    {
        printf("The integer is positive");
    }
    else {
        if (input<0)
        {
            printf("The integer is negative");
        }
        else {
            printf("The integer is zero");
        }
    }
}