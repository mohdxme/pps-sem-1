// 48. Count Digits
#include <stdio.h>

int main() {
    long n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n < 0) n = -n;
    if (n == 0) count = 1;
    while (n > 0) {
        count++;
        n /= 10;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
