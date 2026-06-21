/* Question: WAP to print an Inverted Hollow Pyramid / Star Bridge pattern.
    *******
    *** ***
    **   **
    *     *
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;
    
    // Printing the full first flat line of stars
    for(int i=1;i<=2*n+1;i++)       
    {
        printf("*");
    }
    printf("\n");
    
    // Printing the rest of the bridge structure
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nst;j++)     // Left stars
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++)     // Center spaces
        {
            printf(" ");
        }
        for(int l=1;l<=nst;l++)     // Right stars
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}