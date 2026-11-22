// 38. Armstrong 3 Digit
#include <stdio.h>

int main() {
    int n, a, b, c;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    if (n < 100 || n > 999) {
        printf("Not a 3-digit number\n");
        return 0;
    }
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    if (a*a*a + b*b*b + c*c*c == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}
