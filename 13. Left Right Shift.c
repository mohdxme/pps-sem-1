// 13. Left Right Shift
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d << 1 = %d (multiplied by 2)\n", n, n << 1);
    printf("%d >> 1 = %d (divided by 2)\n", n, n >> 1);
    return 0;
}
