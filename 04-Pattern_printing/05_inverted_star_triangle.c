// Question: WAP to print an Inverted Star Triangle pattern (Decrementing structure).
#include<stdio.h>
int main()
{
    // Method 1: Using formula (n + 1 - i)
    int n;
    printf("Enter no. of row : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+1-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Method 2: Using an extra tracking variable (Commented out for practice)
    // int a = n;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=a; j++)
    //     {
    //         printf("* ");
    //     }
    //     a--;
    //     printf("\n");
    // }
    
    return 0;
}