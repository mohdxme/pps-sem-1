// 59. Product of Digits Recursion
#include <stdio.h>

int productOfDigits(int n) {
    if (n == 0)
        return 1;
    return (n % 10) * productOfDigits(n / 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("Product of digits = 0\n");
    else
        printf("Product of digits = %d\n", productOfDigits(n));
    return 0;
}
