// Question: WAP to compute the Greatest Common Divisor (GCD) / HCF of two given numbers using functions.
#include<stdio.h>
int min(int a, int b)
{
    if(a<b) return a;
    else    return b;
}
int gcd(int a, int b)
{
    int hcf = 1;
    for(int i=min(a,b); i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
            break; // Highest factor milte hi loop break kar diya
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("Enter 2nd Number : ");
    scanf("%d",&b);
    
    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d\n", a, b, hcf);
    return 0;
}