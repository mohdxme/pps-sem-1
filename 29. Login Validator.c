// 29. Login Validator
#include <stdio.h>
#include <string.h>

int main() {
    char user[30], pass[30];
    char validUser[] = "admin";
    char validPass[] = "1234";
    printf("Enter username: ");
    scanf("%29s", user);
    printf("Enter password: ");
    scanf("%29s", pass);
    if (strcmp(user, validUser) == 0) {
        if (strcmp(pass, validPass) == 0)
            printf("Login successful\n");
        else
            printf("Incorrect password\n");
    } else {
        printf("Invalid username\n");
    }
    return 0;
}
