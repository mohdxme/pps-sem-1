// 14. Kth Bit Check
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter a number and bit position K (0-based): ");
    scanf("%d %d", &n, &k);
    if ((n >> k) & 1)
        printf("Bit %d is SET\n", k);
    else
        printf("Bit %d is NOT set\n", k);
    return 0;
}
