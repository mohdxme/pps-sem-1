// 77. Count Average Until Minus1
#include <stdio.h>

int main() {
    int n, count = 0;
    float sum = 0;
    printf("Enter numbers (-1 to stop):\n");
    while (1) {
        scanf("%d", &n);
        if (n == -1)
            break;
        sum += n;
        count++;
    }
    if (count > 0)
        printf("Count = %d, Average = %.2f\n", count, sum / count);
    else
        printf("No numbers entered\n");
    return 0;
}
