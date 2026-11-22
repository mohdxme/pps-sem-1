// 105. Number Diamond
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {                /* upper half */
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {            /* lower half */
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
