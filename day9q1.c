/*Q17: Write a program to find the roots of a quadratic equation and categorize them.*/

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,determinant,x1,x2;
    printf("The general form of a quadratic equations is : (ax^2+bx+c = 0)\n");
    printf("Enter the values of a,b,c = ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a == 0)
    {
        printf("a cannot be zero, try another value");
    }
    else {
         determinant = (pow(b,2)-(4*a*c));
         if (determinant > 0)
         {
            x1 = ((-b + sqrt(determinant))/2*a);
            x2 = ((-b - sqrt(determinant))/2*a);
            printf("The roots are real and different : (%d,%d)\n",x1,x2);
         }
         else if (determinant == 0)
         {
            x1 = ((-b + sqrt(determinant))/2*a);
            x2 = ((-b - sqrt(determinant))/2*a);
            printf("The roots are real and same : (%d,%d)\n",x1,x2);
         }
         else
         {
            printf("The roots are complex");
         }
    }
 
}