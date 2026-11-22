// 53. Alternating Sum
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1)
            sum += i;
        else
            sum -= i;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
