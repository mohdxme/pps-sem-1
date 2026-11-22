// 84. Diamond
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows for the upper half: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {                /* upper half */
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {            /* lower half */
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
