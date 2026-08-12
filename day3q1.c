/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.*/

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int farenhite,celsius;
    printf("Enter the temperature in celsius : ");
    scanf("%d",&celsius);
    farenhite = (celsius*9/5+32);
    printf("Temperatre in farenhite is : %d\n",farenhite);
    return 0;
}