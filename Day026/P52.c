/*

Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main(){
    int blockSizes[] = {1, 3, 5, 3, 1};
    int num = 5;

    for (int b = 0; b < num; b++) {
        for (int i = 0; i < blockSizes[b]; i++) {
            printf("*\n");
        }
        if (b != num - 1) {
            printf("\n");
        }
    }

    return 0;
}