// Question: WAP to print first 'n' Fibonacci numbers.
#include<stdio.h>
int main()
{
    // Program to print only the nth Fibonacci number (Commented out)
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // int a = 1, b = 1, sum = 1;
    // for(int i=1;i<=n-2;i++)
    // {
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    // }
    // printf("The %d fibonacci number is %d",n,sum);

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a = 1;
    int b = 1;
    int sum;

    printf("The 1 fibonacci number is %d\n",a);
    printf("The 2 fibonacci number is %d\n",b);

    for(int i=3;i<=n;i++)
    {
        sum = a + b;
        printf("The %d fibonacci number is %d\n",i,sum);

        a = b;
        b = sum;
    }

    return 0;
}