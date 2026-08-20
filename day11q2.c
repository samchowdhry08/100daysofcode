/*Q22: Write a program to find profit or loss percentage given cost price and selling price.1*/

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int cost_price,selling_price;
    float profit_percentage,loss_percentage;
    printf("Enter the cost price and selling price = ");
    scanf("%d,%d",&cost_price,&selling_price);
    if (cost_price>selling_price)
    {
        loss_percentage = ((cost_price - selling_price) * 100.0) / cost_price;
        printf("loss percentage = %.2f\n",loss_percentage);
    }
    else if (selling_price>cost_price)
    {
        profit_percentage = ((selling_price - cost_price) * 100.0) / cost_price;
        printf("Profit percentage = %.2f\n",profit_percentage);
    }
    else {
        printf("No profit or loss");
    }
    return 0;
}
