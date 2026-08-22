/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main(){
    float length ,width, perimeter ,area;
    printf("Enter Length\n");
    scanf("%f",&length);
    printf("Enter Width\n");
    scanf("%f",&width);
    perimeter= 2 * (length+width);
    area=length * width;
    printf("Perimeter of Rectangle is %.2f\n", perimeter);
    printf("Area of Rectangle is %.2f\n", area);
    return 0;
}

