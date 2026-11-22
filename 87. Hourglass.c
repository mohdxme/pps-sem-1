// 87. Hourglass
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows for each half: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {                /* upper half (inverted pyramid) */
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = 2; i <= n; i++) {                /* lower half (pyramid) */
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
