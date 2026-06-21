/* Question: WAP to print a Palindromic Number Pyramid.
       1
      121
     12321
    1234321
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)     // For spaces
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)       // Increasing number triangle
        {
            printf("%d",k);
        }
        int a = i - 1;              // Decreasing number triangle
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}