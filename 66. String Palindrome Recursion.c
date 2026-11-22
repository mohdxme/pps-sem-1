// 66. String Palindrome Recursion
#include <stdio.h>
#include <string.h>

int isPalindrome(char s[], int start, int end) {
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%99s", s);
    if (isPalindrome(s, 0, strlen(s) - 1))
        printf("\"%s\" is a palindrome\n", s);
    else
        printf("\"%s\" is not a palindrome\n", s);
    return 0;
}
