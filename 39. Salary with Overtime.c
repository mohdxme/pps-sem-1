// 39. Salary with Overtime
#include <stdio.h>

int main() {
    float hours, rate, salary;
    printf("Enter hours worked and hourly rate: ");
    scanf("%f %f", &hours, &rate);
    if (hours <= 40)
        salary = hours * rate;
    else
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    printf("Salary = %.2f\n", salary);
    return 0;
}
