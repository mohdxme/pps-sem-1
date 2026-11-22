// 42. Scholarship Eligibility
#include <stdio.h>

int main() {
    float marks, attendance, income;
    printf("Enter marks (%%), attendance (%%) and annual family income: ");
    scanf("%f %f %f", &marks, &attendance, &income);
    if (marks >= 85 && attendance >= 75 && income <= 300000)
        printf("Eligible for full scholarship\n");
    else if (marks >= 75 && attendance >= 75 && income <= 500000)
        printf("Eligible for partial scholarship\n");
    else
        printf("Not eligible for scholarship\n");
    return 0;
}
