/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array right after first
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}