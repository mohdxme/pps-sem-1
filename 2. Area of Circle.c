// 2. Area of Circle
#include <stdio.h>
#define PI 3.14159265

int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of circle = %.2f\n", area);
    return 0;
}
