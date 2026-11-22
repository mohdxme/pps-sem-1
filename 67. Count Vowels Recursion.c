// 67. Count Vowels Recursion
#include <stdio.h>
#include <ctype.h>

int countVowels(char s[], int i) {
    if (s[i] == '\0')
        return 0;
    char c = tolower(s[i]);
    int isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    return isVowel + countVowels(s, i + 1);
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf(" %99[^\n]", s);
    printf("Number of vowels = %d\n", countVowels(s, 0));
    return 0;
}
