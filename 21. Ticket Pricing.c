// 21. Ticket Pricing
#include <stdio.h>

int main() {
    int age, price;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Invalid age\n");
        return 0;
    }
    if (age < 5)
        price = 0;          /* infants: free */
    else if (age <= 12)
        price = 100;        /* children */
    else if (age < 60)
        price = 200;        /* adults */
    else
        price = 150;        /* senior citizens */
    printf("Ticket price = Rs. %d\n", price);
    return 0;
}
