/* Question: Print the 0 & 1 Triangle pattern.
    1 
    0 1 
    1 0 1 
    0 1 0 1 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of row : ");
    scanf("%d",&n);
    
    // Method 1: Using a toggling variable (Commented out for reference)
    /*
    int a;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) a = 1;
        else a = 0;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            if(a==0) a = 1;
            else a = 0;
        }
        printf("\n");
    }
    */

    // Method 2: Smart Math Logic (i+j is even -> 1, else 0)
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}