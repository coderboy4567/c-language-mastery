// Question: WAP to print the sum of a given number and its reverse.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Your Number : ");
    scanf("%d",&n);

    int original = n;
    int r = 0;
    while(n != 0)
    {
        int ld = n % 10;
        r = r * 10 + ld;
        n = n / 10;
    }

    int sum = original + r;
    printf("Reverse number is %d\n", r);
    printf("Sum is %d\n", sum);

    return 0;
}