// 23. Time Greeting
#include <stdio.h>

int main() {
    int hour;
    printf("Enter hour (0-23): ");
    scanf("%d", &hour);
    if (hour < 0 || hour > 23)
        printf("Invalid hour\n");
    else if (hour >= 5 && hour < 12)
        printf("Good Morning\n");
    else if (hour >= 12 && hour < 17)
        printf("Good Afternoon\n");
    else if (hour >= 17 && hour < 21)
        printf("Good Evening\n");
    else
        printf("Good Night\n");
    return 0;
}
