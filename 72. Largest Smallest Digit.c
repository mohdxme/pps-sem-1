// 72. Largest Smallest Digit
#include <stdio.h>

int main() {
    int n, d, largest = 0, smallest = 9;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    if (n == 0) largest = smallest = 0;
    while (n > 0) {
        d = n % 10;
        if (d > largest)  largest = d;
        if (d < smallest) smallest = d;
        n /= 10;
    }
    printf("Largest digit  = %d\n", largest);
    printf("Smallest digit = %d\n", smallest);
    return 0;
}
