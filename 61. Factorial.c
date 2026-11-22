// 61. Factorial
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter N: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }
    for (i = 2; i <= n; i++)
        fact *= i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}
