// 71. Armstrong Any Digits
#include <stdio.h>

int main() {
    int n, temp, digits = 0, d, i;
    long sum = 0, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {          /* count digits */
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        d = temp % 10;
        p = 1;
        for (i = 0; i < digits; i++)
            p *= d;
        sum += p;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
