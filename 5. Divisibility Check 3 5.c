// 5. Divisibility Check 3 5
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if (n % 3 == 0)
        printf("Divisible by 3 only\n");
    else if (n % 5 == 0)
        printf("Divisible by 5 only\n");
    else
        printf("Divisible by neither 3 nor 5\n");
    return 0;
}
