// 58. Happy Number
#include <stdio.h>

int sumSquares(int n) {
    int s = 0, d;
    while (n > 0) {
        d = n % 10;
        s += d * d;
        n /= 10;
    }
    return s;
}

int main() {
    int n, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    /* every unhappy number eventually falls into the cycle containing 4 */
    while (num != 1 && num != 4)
        num = sumSquares(num);
    if (num == 1)
        printf("%d is a Happy Number\n", n);
    else
        printf("%d is not a Happy Number\n", n);
    return 0;
}
