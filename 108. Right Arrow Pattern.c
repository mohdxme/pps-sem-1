// 108. Right Arrow Pattern
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n - 1; i++) {            /* upper half of arrow head */
        for (j = 1; j <= n - 1; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    for (j = 1; j <= 2 * n - 1; j++)          /* shaft + middle of head */
        printf("* ");
    printf("\n");
    for (i = n - 1; i >= 1; i--) {            /* lower half of arrow head */
        for (j = 1; j <= n - 1; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
