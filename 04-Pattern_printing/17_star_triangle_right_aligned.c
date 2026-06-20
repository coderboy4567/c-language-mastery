/* Question: WAP to print a Right-Aligned Star Triangle (Mast Pattern).
       *
      **
     ***
    ****
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // Inner loop 1 -> handles spaces
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        // Inner loop 2 -> handles stars
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}