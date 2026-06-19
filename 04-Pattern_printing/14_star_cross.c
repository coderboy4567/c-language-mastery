 /* print the given pattern, star cross
   *   *
    * *
     *
    * *
   *   *

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            // i==j checks main diagonal, i+j==n+1 checks opposite diagonal
            if(i==j || i+j == n+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}