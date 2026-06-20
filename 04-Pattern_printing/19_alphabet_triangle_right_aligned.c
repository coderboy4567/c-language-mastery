/* Question: WAP to print a Right-Aligned Alphabet Triangle.
         A
       A B
     A B C
   A B C D
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // Prints spaces
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        // Prints characters
        for(int k=1;k<=i;k++)
        {
            printf("%c ",64+k);
        }
        printf("\n");
    }
    return 0;
}