// 54. Power Without pow
#include <stdio.h>
#include <stdlib.h>

int main() {
    double x, result = 1;
    int n, i;
    printf("Enter base x and exponent n: ");
    scanf("%lf %d", &x, &n);
    for (i = 1; i <= abs(n); i++)
        result *= x;
    if (n < 0)
        result = 1 / result;
    printf("%.2f ^ %d = %.4f\n", x, n, result);
    return 0;
}
