// 68. Increasing Decreasing Recursion
#include <stdio.h>

void printUpDown(int i, int n) {
    if (i > n)
        return;
    printf("%d ", i);       /* increasing order while going down the calls */
    printUpDown(i + 1, n);
    printf("%d ", i);       /* decreasing order while returning */
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printUpDown(1, n);
    printf("\n");
    return 0;
}
