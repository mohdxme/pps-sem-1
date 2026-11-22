// 8. Three Numbers Equal
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("All three numbers are equal\n");
    else
        printf("All three numbers are not equal\n");
    return 0;
}
