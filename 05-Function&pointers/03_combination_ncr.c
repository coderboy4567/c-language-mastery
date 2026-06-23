// Question: WAP to find the Combination (nCr) of given numbers using a user-defined factorial function.
#include<stdio.h>
int factorial(int x)
{
    int fact = 1;
    for(int i=2; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;    
}
int main()
{
    int n, r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    
    // Formula: n! / (r! * (n-r)!)
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d\n", ncr);
    return 0;
}