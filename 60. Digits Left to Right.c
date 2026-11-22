// 60. Digits Left to Right
#include <stdio.h>

int main() {
    int n, divisor = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n / divisor >= 10)
        divisor *= 10;
    while (divisor > 0) {
        printf("%d ", (n / divisor) % 10);
        divisor /= 10;
    }
    printf("\n");
    return 0;
}
