/* print the given pattern
      *
      *
    * * *
      *
      *  
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines (Preferably Odd) : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int a = n/2 + 1; // Center index
            if(j==a || i==a)
                printf("* ");
            else 
                printf("  "); // Added space for better formatting
        }
        printf("\n");
    }
    return 0;
}