/*
Q108: Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main() {
    int n, i;
    int nums[100], answer[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: answer[i] = product of all elements to the LEFT of i
    int left = 1;
    for (i = 0; i < n; i++) {
        answer[i] = left;
        left = left * nums[i];
    }

    // Step 2: multiply answer[i] by product of all elements to the RIGHT of i
    int right = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right = right * nums[i];
    }

    printf("[");
    for (i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d,", answer[i]);
    }
    printf("]\n");

    return 0;
}