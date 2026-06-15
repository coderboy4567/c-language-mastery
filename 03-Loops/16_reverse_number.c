// Question: WAP to print the reverse of a given number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int reverse = 0;
    int lastDigit = 0;
    while(n!=0)
    {
        lastDigit = n%10;
        reverse = reverse * 10 + lastDigit;
        n = n/10;
    }
    printf("The reverse number is %d\n",reverse);
    
    return 0;
}