// 107. Spiral Matrix 4x4
#include <stdio.h>

int main() {
    int n = 4, a[10][10], num = 1, i;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {
        for (i = left; i <= right && num <= n * n; i++)
            a[top][i] = num++;
        top++;
        for (i = top; i <= bottom && num <= n * n; i++)
            a[i][right] = num++;
        right--;
        for (i = right; i >= left && num <= n * n; i--)
            a[bottom][i] = num++;
        bottom--;
        for (i = bottom; i >= top && num <= n * n; i--)
            a[i][left] = num++;
        left++;
    }
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
