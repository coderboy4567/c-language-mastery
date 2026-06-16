// Question: WAP to check whether a given number is a Palindrome or not (e.g., 121, 454 reversed are same).
#include<stdio.h>
int main()
{
    int n, original, reverse = 0, lastDigit;
    printf("Enter a number to check Palindrome: ");
    scanf("%d", &n);
    
    original = n; // Store original number
    while(n != 0)
    {
        lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    
    if(original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);
        
    return 0;
}