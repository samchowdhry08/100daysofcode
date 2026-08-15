#include <stdio.h>
#include <math.h>
int main()
{
    int input;
    printf("Enter an integer : ");
    scanf("%d",&input);
    if (input%2 == 0)
    {
        printf("The integers is even");
    }
    else{
        printf("The integer is odd");
    }
    return 0;
}