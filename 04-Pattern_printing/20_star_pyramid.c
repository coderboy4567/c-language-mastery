/* Question: WAP to print a full Star Pyramid pattern.
       *
      ***
     *****
    *******
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // Prints spaces (n-i)
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        // Prints odd number of stars (2*i - 1)
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}