// Question: WAP to check if a 3-digit number is an Armstrong number (e.g., 153 = 1^3 + 5^3 + 3^3).
#include<stdio.h>
int main()
{
    int n, original, remainder, result = 0;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &n);
    
    original = n;
    while (original != 0)
    {
        remainder = original % 10;
        result = result + (remainder * remainder * remainder); // cube of digit
        original = original / 10;
    }
    
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
        
    return 0;
}