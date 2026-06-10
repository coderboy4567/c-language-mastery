// Question: Check if a number entered by the user is prime or composite using the break statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int a = 0; // Flag variable: 0 means prime, 1 means composite
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0) // if 'i' is a factor of 'n'
        {
            a = 1;
            break; // Exit the loop immediately
        }
    }
    
    if(n==1) printf("1 is neither prime nor composite");
    else if(a==0) printf("The given number is prime");
    else printf("The given number is composite");
    
    return 0;
}