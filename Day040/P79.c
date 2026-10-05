/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int i, j, d, row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            // Even diagonal (moving bottom-left to top-right)
            row = (d < n) ? d : n - 1;
            col = d - row;
            while (row >= 0 && col < m) {
                printf("%d ", a[row][col]);
                row--;
                col++;
            }
        } else {
            // Odd diagonal (moving top-right to bottom-left)
            col = (d < m) ? d : m - 1;
            row = d - col;
            while (col >= 0 && row < n) {
                printf("%d ", a[row][col]);
                row++;
                col--;
            }
        }
    }

    printf("\n");
    return 0;
}