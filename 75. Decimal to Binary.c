// 75. Decimal to Binary
#include <stdio.h>

int main() {
    int n, i = 0, bin[32];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    if (n == 0)
        bin[i++] = 0;
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    printf("Binary = ");
    while (i > 0)
        printf("%d", bin[--i]);
    printf("\n");
    return 0;
}
