// 28. Quadratic Roots
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and different roots: %.2f and %.2f\n", r1, r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Real and equal roots: %.2f and %.2f\n", r1, r1);
    } else {
        printf("Imaginary roots: %.2f + %.2fi and %.2f - %.2fi\n",
               -b / (2 * a), sqrt(-d) / (2 * a),
               -b / (2 * a), sqrt(-d) / (2 * a));
    }
    return 0;
}
