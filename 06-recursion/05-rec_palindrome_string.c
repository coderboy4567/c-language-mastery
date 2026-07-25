#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char word[] = "madam";
    printf("%s is %s\n", word, isPalindrome(word, 0, strlen(word) - 1) ? "Palindrome" : "Not Palindrome");
    return 0;
}