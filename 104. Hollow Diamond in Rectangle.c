// 104. Hollow Diamond in Rectangle
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, size, mid, i, j;
    printf("Enter n (size = 2n-1): ");
    scanf("%d", &n);
    size = 2 * n - 1;
    mid = n - 1;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1 ||
                abs(i - mid) + abs(j - mid) == mid)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
