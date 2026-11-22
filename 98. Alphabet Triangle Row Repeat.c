// 98. Alphabet Triangle Row Repeat
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)
            printf("%c ", 'A' + i);
        printf("\n");
    }
    return 0;
}
