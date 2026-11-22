// 34. Valid Triangle
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
        printf("Valid triangle\n");
    else
        printf("Triangle cannot be formed\n");
    return 0;
}
