// Question: WAP to print the sum of all the odd digits of a given number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    
    // Sum of even digits (Commented out for practice)
    // while(n!=0)
    // {
    //     lastDigit = n%10;
    //     if(lastDigit%2==0) 
    //     {
    //         sum = sum + lastDigit;
    //     }
    //     n = n/10;
    // }

    while(n!=0)
    {
        lastDigit = n%10;
        if(lastDigit%2!=0) 
        {
            sum = sum + lastDigit;
        }
        n = n/10;
    }
    printf("The sum of odd digits is %d",sum);
    return 0;
}