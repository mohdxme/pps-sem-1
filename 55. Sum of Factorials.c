// 55. Sum of Factorials
#include <stdio.h>

int main() {
    int n, i;
    long fact = 1, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;      /* fact now holds i! */
        sum += fact;
    }
    printf("Sum of factorials = %ld\n", sum);
    return 0;
}
