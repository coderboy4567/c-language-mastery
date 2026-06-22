/* Question: WAP to print a Hollow Star Diamond pattern.
       *
      * *
     * *
      * *
       *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines (Preferably Odd) : ");
    scanf("%d",&n);
    
    int nsp1 = n/2;    
    int nsp2 = -1;      
    int ml = n/2 + 1;   
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=nsp1; j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j=1; j<=nsp2; j++)
        {
            printf(" ");
        }
        if(i > 1 && i < n)
        {
            printf("*");
        }
        if(i < ml)
        {
            nsp1--;
            nsp2 += 2;
        }
        else
        {
            nsp1++;
            nsp2 -= 2;
        }
        printf("\n");
    }
    return 0;
}