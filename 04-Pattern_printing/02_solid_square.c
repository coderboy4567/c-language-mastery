// Question: WAP to print a solid square pattern of size 'n x n'.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}