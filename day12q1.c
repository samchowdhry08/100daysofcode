/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main()
{
    int late_days,fine;
    printf("Enter the number of late days = ");
    scanf("%d",&late_days);
    if ( late_days>=1 && late_days<=5)
    {
        fine = late_days * 2;
        printf("Fine : %d\n", fine);
    }
    else if(late_days>=6 && late_days<=10)
    {   
        fine = fine = (5 * 2) + ((late_days - 5) * 4);
        printf("Fine : %d\n", fine);
    }
    else if(late_days>=11 && late_days<=30)
    {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
        printf("Fine : %d\n", fine);
    }
    else if (late_days>30)
    {
        printf("Membership Cancelled");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}