/* Question: WAP to print a Rhombus star pattern.
       ****
      ****
     ****
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
        // Loop for spaces to give it a slant slant
        for(int j=1;j<=n+1-i;j++)
        {
            printf(" ");
        }
        // Loop to print a fixed number of stars 'n' in each row
        for(int k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}