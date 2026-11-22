// 15. Count Set Bits
#include <stdio.h>

int main() {
    unsigned int n, count = 0;
    printf("Enter a number: ");
    scanf("%u", &n);
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    printf("Number of set bits = %u\n", count);
    return 0;
}
