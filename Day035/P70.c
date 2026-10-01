/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n; // handle k larger than n

    int temp[n];

    // Place last k elements at the start
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Place remaining elements after them
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
