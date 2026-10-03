/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int diag[100];
    int i, j, flag = 0;

    printf("Enter size of matrix (rows and columns): ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Stores diagonal elements
    for (i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    // Check for duplicates among diagonal elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
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