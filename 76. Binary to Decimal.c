// 76. Binary to Decimal
#include <stdio.h>

int main() {
    long bin;
    int decimal = 0, base = 1, digit;
    printf("Enter a binary number: ");
    scanf("%ld", &bin);
    while (bin > 0) {
        digit = bin % 10;
        decimal += digit * base;
        base *= 2;
        bin /= 10;
    }
    printf("Decimal = %d\n", decimal);
    return 0;
}
