/* Question: Print the given mixed pattern:
    1 
    A B 
    1 2 3 
    A B C D 
    1 2 3 4 5 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i % 2 != 0) // Odd rows print numbers
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        else // Even rows print alphabets
        {
            for(int j=1;j<=i;j++)
            {
                printf("%c ",64+j);
            }
        }
        printf("\n");
    }
    return 0;
}