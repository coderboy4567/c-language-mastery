/* Question: WAP to print a Hollow Rectangle pattern of size 'n x m'.
    ******
    * *
    * *
    ******
*/
#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    printf("Enter no. of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            // Print star only at boundaries
            if(i==1 || i==n || j==1 || j==m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}