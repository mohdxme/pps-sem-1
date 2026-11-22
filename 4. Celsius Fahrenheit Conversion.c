// 4. Celsius Fahrenheit Conversion
#include <stdio.h>

int main() {
    int choice;
    float t, result;
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &t);
    if (choice == 1) {
        result = (t * 9 / 5) + 32;
        printf("%.2f C = %.2f F\n", t, result);
    } else if (choice == 2) {
        result = (t - 32) * 5 / 9;
        printf("%.2f F = %.2f C\n", t, result);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
