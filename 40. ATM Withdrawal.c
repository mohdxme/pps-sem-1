// 40. ATM Withdrawal
#include <stdio.h>

int main() {
    float balance, amount;
    float minBalance = 500;
    printf("Enter current balance: ");
    scanf("%f", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount <= 0)
        printf("Rejected: invalid amount\n");
    else if (((int)amount) % 100 != 0)
        printf("Rejected: amount must be a multiple of 100\n");
    else if (amount > balance)
        printf("Rejected: insufficient balance\n");
    else if (balance - amount < minBalance)
        printf("Rejected: minimum balance of %.0f must be maintained\n", minBalance);
    else {
        balance -= amount;
        printf("Approved. Remaining balance = %.2f\n", balance);
    }
    return 0;
}
