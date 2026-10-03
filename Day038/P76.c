/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int i, j, flag = 0;

    printf("Enter size of matrix (rows and columns): ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) {
        printf("False\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }

    if (flag == 0)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}