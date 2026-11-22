// 37. Quadrant of Point
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("First quadrant\n");
    else if (x < 0 && y > 0)
        printf("Second quadrant\n");
    else if (x < 0 && y < 0)
        printf("Third quadrant\n");
    else if (x > 0 && y < 0)
        printf("Fourth quadrant\n");
    else if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("Lies on the Y-axis\n");
    else
        printf("Lies on the X-axis\n");
    return 0;
}
