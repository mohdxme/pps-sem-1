// 26. Positive Negative Zero Even Odd
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Positive ");
        if (n % 2 == 0)
            printf("and Even\n");
        else
            printf("and Odd\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}
