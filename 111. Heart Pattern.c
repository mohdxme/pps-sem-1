// 111. Heart Pattern
#include <stdio.h>

int main() {
    int n = 6, i, j;
    for (i = n / 2; i <= n; i += 2) {         /* two lobes of the heart */
        for (j = 1; j < n - i; j += 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = n; i >= 1; i--) {                /* inverted triangle */
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
