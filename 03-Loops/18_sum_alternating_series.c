// Question: WAP to print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6... upto 'n' terms (Optimized Method).
#include<stdio.h>
int main()
{
    // Loop method for small numbers (Commented out for reference)
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // int sum = 0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2!=0) sum = sum + i;
    //     else sum = sum - i;
    // }
    // printf("The sum is %d",sum);

    // Optimized Math method for large numbers (O(1) time complexity)
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    if(n%2==0)
    {
        sum = -n/2;
    }
    else
    {
        sum = -n/2 + n;
    }
    printf("The sum is %d\n",sum);
    return 0;
}