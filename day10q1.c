/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a1,a2,base;
    printf("Enter the three sides of triangle (a1,a2,base) = ");
    scanf("%d,%d,%d",&a1,&a2,&base);
    if ( a1 == a2 && a2 == base)
    {
        printf("The triangle is Equilateral");
    }
    else if (a1 == a2 && a2 != base)
    {
        printf("The triangle is Isosceles");
    }
    else if ( a1 != a2 && a2 != base && base !=a1)
    {
        printf("The triangle is scalene");
    }
    return 0;
}