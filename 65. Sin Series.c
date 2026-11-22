// 65. Sin Series
#include <stdio.h>

int main() {
    int n, i;
    double x, term, sum;
    printf("Enter x (in radians) and number of terms: ");
    scanf("%lf %d", &x, &n);
    term = x;
    sum = x;
    for (i = 1; i < n; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    printf("sin(%.2f) = %.6f\n", x, sum);
    return 0;
}
