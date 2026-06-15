// Question: WAP to print the factorials of first 'n' numbers.
#include<stdio.h>
int main()
{
    // Factorial of a single number (Commented out for reference)
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // int product = 1;
    // for(int i=1;i<=n;i++)
    // {
    //     product = product * i;
    // }
    // printf("The factorial of this %d",product);

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int product = 1;
    for(int i=1;i<=n;i++)
    {
        product = product * i;
        printf("The factorial of %d is : %d\n",i,product);
    }
    
    return 0;
}