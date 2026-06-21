/* Question: WAP to print a Star Diamond pattern.
   Note: Input an odd number (like 5, 7, 9) for a perfectly symmetrical diamond.
       *
      ***
     *****
      ***
       *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines (Preferably Odd) : ");
    scanf("%d",&n);
    int nsp = n/2;
    int nst = 1;
    int ml =  n/2 + 1; // Middle line index
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}